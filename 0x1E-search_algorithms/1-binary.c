#include "search_algos.h"

/**
 * binary_search - a function search in an array in binary search algorithm
 * @array: point to the first element of the array to search through it
 * @size: number of elements in the array
 * @value: the value of the element we search for
 *
 * Return: the index of the value we search for
 * or -1 if the array is NULL/the value was not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, low = 0, high = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid  = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");

		}
		printf("\n");


		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	printf("Value %d not found in the array\n", value);
	return (-1);
}
