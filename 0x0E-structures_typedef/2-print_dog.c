#include "dog.h"

/**
 * print_dog - print the struct dog
 *
 * @d: the struct
 *
 */

void print_dog(struct dog *d)
{
    if (d == NULL)
    {
        return;
    }

	printf("Name: %s\n", d->name ? d->name : "(nill)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
