#include<stdio.h>
#include "main.h"

/**
 * _abs - function to print the abslute value
 * @i: the value
 * Return: the abslute value
 */

int _abs(int i)
{
if (i < 0)
i = i * -1;
return (i);
}
