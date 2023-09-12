#include "dog.h"
#include<stdio.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: the structure
 * Return: none
 */
void print_dog(struct dog *d)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
