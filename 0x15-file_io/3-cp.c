#include "main.h"

/**
 * Close - a function to close a file
 * @fd: the file discriptor
 */

void Close(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * buffering - function to create a buffer
 * @fd: the content of the buffer
 * Return: the buffer
 */

char *buffering(char *fd)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd);
		exit(99);
	}

	return (buffer);
}


/**
 * main - Entry point to program that copies file content to another one
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int from, to, _read, _write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = buffering(argv[2]);
	from = open(argv[1], O_RDONLY);
	_read = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		_write = write(to, buffer, _read);
		if (to == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		_read = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (_read > 0);

	free(buffer);
	Close(from);
	Close(to);
	return (0);
}
