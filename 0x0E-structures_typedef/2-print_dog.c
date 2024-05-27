#include "dog.h"

/**
 * print_dog - print the struct dog
 *
 * @d: the struct
 *
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}

	printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	printf("Owner: %s", d->owner);
}
