#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{

/**
 * This returns on error -1 , and 1 if success
 *
 */
  return (write(1, &c, 1));
}
