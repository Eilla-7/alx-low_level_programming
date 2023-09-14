#include "function_pointers.h"
#include<stdio.h>
/**
 * int_index - a function to search for an element
 * @array: an array to search in
 * @size: the size of the array
 * @cmp: a function to compare
 * Return: the index of the element
 */

int int_index(int *array, int size, int (*cmp)(int))
	{
		int i;

		if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
