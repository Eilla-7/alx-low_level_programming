#include "function_pointers.h"
#include<stdio.h>
/*
 * array_iterator - a functon excute a function 
 * @array: the array
 * @size: the size of array
 * @action: a function
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
