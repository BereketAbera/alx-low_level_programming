#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - create a file
 * @filename: name of a file
 * @text_content: content of a file
 *
 * Return: success 1 or failure -1
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd;

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[len] != '\0')
		len++;

	if (len == 0)
	{
		close(fd);
		return (1);
	}
	write(fd, text_content, len);

	close(fd);
	return (1);
}
