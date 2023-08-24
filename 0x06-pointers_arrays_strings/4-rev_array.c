#include<stdio.h>
#include "main.h"

/**
 * reverse_array - to revers the arrangement of an array's elements
 * @a: the array we want to revers
 * @n: number of the array's elements
 * Return: hes no return value
 */

void reverse_array(int *a, int n)
{
int i, tmp;
for (i = 0; i < n / 2 ; i++)
{
tmp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = tmp;
}
return;
}
