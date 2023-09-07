#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * array_range - a function that creates an array of integers
 * @min: the minimum element
 * @max: the maximum element
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
int *a, i = 0;

if (min > max)
return (NULL);

a = malloc((sizeof(int) * (max - min)) + sizeof(int));

if (a == NULL)
return (NULL);

while (min <= max)
{
a[i] = min;
i++;
min++;
}
return (a);
}
