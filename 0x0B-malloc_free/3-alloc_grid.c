#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * alloc_grid -  function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: the first dimention
 * @height: the second dimention
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height)
{
int i, j, mall;
int **a;

/*allocate for the width dimentional*/
a = malloc(sizeof(int *) * height);


/*allocate for the height dimentional*/
for (mall = 0; mall < width; mall++)
{
a[mall] = malloc(sizeof(int) * width);
}

 if (width == 0)
   return (NULL);
 if (height == 0)
   return (NULL);

if (a == NULL)
return (NULL);


for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
a[i][j] = 0;
}
}
return (a);
}
