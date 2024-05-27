#include "dog.h"

/**
 * init_dog - initial the struct
 *
 * @d: the object name
 *
 * @name: the name
 *
 * @age: the age
 *
 * @owner: the owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
