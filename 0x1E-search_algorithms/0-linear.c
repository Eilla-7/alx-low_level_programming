#include "search_algos.h"

/**
 * linear_search - a function to search through array linearly
 * @array: point to the first element of the array to search through it
 * @size: number of elements in the array
 * @value: the value of the element we search for
 *
 * Return: the index of the value we search for
 * or -1 if the array is NULL/the value was not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
