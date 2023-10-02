#include "main.h"
#include <unistd.h>

/**
 * read_textfile - a function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: the file name
 * @letters:  the number of letters it should read and print
 * Return: if Success, returns the actual number of letters it could read and print, returns 0 if the file can
 * not be opened or read or the filename is NULL or if 
 * fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t _open;
	ssize_t _read;
	ssize_t _write;

	 _open = open(filename, O_RDONLY);
	 if (_open == -1)
		 return (0);

	 buffer = malloc(sizeof(char) * letters);

	 _read = read(_open, buffer, letters);
	 _write = write(STDOUT_FILENO, buffer, _read);

	 close(_open);

	 return (_write);
}
