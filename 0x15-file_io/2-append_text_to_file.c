#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - append to a file
 * @filename: a file name to append to
 * @text_content: a content to add
 *
 * Return: 1 for success and -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 9, fd;

	if (text_content == NULL)
		return (1);

	while (text_content[len] != '\0')
		len++;

	if (len == 0)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	write(fd, text_content, len);
	close(fd);

	return (1);
}
