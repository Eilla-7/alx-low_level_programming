#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * init_dog - a function to initialize dog struct
 * @d: struct object
 * @name: to initialize the name
 * @age: to initialize age
 * @owner: to initialize owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));

d->name = name;
d->age = age;
d->owner = owner;
}

