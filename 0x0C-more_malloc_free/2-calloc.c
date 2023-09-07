#include<stdlib.h>
#include<stdio.h>
#include "main.h"
/**
 *  _calloc - a function that allocates memory for an array
 * @nmemb: number of array elements
 * @size: the size of each element
 * Return: pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *array;
unsigned int i;

if (size == 0 || nmemb == 0)
return (NULL);
array = malloc(size * nmemb);

if (array == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
{
array[i] = 0;
}
return (array);
}
