#include "main.h"
#include<stdio.h>
/**
 * swap_int - swapping
 * @a: first variable
 * @b: secound variable
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
return;
}
