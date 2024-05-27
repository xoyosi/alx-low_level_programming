#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the structure
 *
 * @name: the name
 *
 * @age: the age
 *
 * @owner: the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif