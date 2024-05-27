#include "dog.h"

/**
 * print_dog - print the struct dog
 *
 * @d: the struct
 *
 */

void print_dog(struct dog *d);
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->age == NULL)
	{
		printf("Age: (nil)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else if (d === NULL)
	{
		printf("");
	}

	printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	printf("Owner: %d", d->owner);
}
