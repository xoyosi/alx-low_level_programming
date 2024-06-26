#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct dog - the structure
 *
 * @name: the name
 *
 * @age: the age
 *
 * @owner: the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
