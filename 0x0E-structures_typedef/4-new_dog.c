#include<stdlib.h>
#include "dog.h"
#include<stdio.h>


/**
 * _strcpy - function
 * @dest: the parameter
 * @src: the string
 * Return: the value of dest
 */

char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}



/**
 * new_dog - function to add new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len_1, len_2;
for (len_1 = 0; name[len_1] != '\0'; len_1++)
;
for (len_2 = 0; owner[len_2] != '\0'; len_2++)
;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
 
dog->name = malloc(sizeof(char) * (len_1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(sizeof(char) * (len_2 + 1));

if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
