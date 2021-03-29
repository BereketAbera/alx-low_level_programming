#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - copy file content
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 for success and other for failur
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to;
	int fd1, fd2, readValue;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT + O_WRONLY + O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	readValue = read(fd1, buf, 1023);
	while (readValue != 0)
	{
		buf[readValue] = '\0';
		write(fd2, buf, readValue + 1);
		readValue = read(fd1, buf, 1023);
	}
	if (close(fd1) == -1 || close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", close(fd1) == -1 ? fd1 : fd2);
		exit(100);
	}
	return (0);
}
