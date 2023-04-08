#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFSIZE 1024

/**
 * main - Copies the content of a file to another file
 * @ac: The number of arguments passed to the program
 * @av: An array of strings containing the arguments
 *
 * Return: 0 if successful, 97 if incorrect number of arguments, 98 if file_from
 * can't be read, 99 if file_to can't be created or written to, or 100 if file
 * descriptors can't be closed
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, len;
	char buf[BUFSIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(fd_from);
		exit(99);
	}

	do {
		len = read(fd_from, buf, BUFSIZE);
		if (len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			close(fd_from);
			close(fd_to);
			exit(98);
		}
		if (len > 0 && write(fd_to, buf, len) != len)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	} while (len > 0);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
