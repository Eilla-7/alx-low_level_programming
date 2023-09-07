#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * malloc_checked - check for a space in the memory
 * @b: the size of needed memory
 * Return: pointer to the reserved memory
 */
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
