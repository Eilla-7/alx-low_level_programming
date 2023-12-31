#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct to define dog details
 * @name: name of the dog
 * @age: age of the dog
 * @owner:  the owner o
 */


typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
