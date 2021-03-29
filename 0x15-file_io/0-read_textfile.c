#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile - react contents of a file
 * @filename: a file name to read
 * @letters: number of letters to read
 *
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t printedCount = 0;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	read(fd, buf, letters);

	buf[letters + 1] = '\0';

	while (buf[printedCount] != '\0')
	{
		write(1, &buf[printedCount], 1);
		printedCount++;
	}

	close(fd);
	free(buf);
	return (printedCount);
}
