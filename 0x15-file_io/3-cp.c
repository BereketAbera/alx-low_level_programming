#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	char *file_from, *file_to;
	int fd_from, fd_to, readValue;
	char buf[1024];
	
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_CREAT + O_WRONLY + O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		exit(99);
	}
	readValue = read(fd_from, buf, 1024);
	if (readValue == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	while (readValue != 0)
	{
		buf[readValue] = '\0';
		write(fd_to, buf, readValue + 1);
		readValue = read(fd_from, buf, 1023);
	}

	close(fd_from);
	close(fd_to);
	return (1);
}
