#include "search_algos.h"

/**
 * jump_search - a function that search in array in a jump algorithm
 * @array: the array we searrch in
 * @size: the number of elements in the array
 * @value: the value we want to search for
 *
 * Return: the index of the value or -1 if the array is empty/value not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = (int)sqrt(size), step = 0, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		step += jump;
	}

	prev = step - jump;
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	for (i = prev; i <= step && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
