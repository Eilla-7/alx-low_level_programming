#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1 if Success, -1 in faliure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, _write, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (filename[length])
			length++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	_write = write(file, text_content, length);

	if (file == -1 || _write == -1)
		return (-1);

	close(file);

	return (1);
}

