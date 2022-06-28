#include "dog.h"
#include <stdio.h>

/**
 * print_dog - dog :)
 * @d: pointer to dog :)
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	#undef NULL_POINTER
	#define NULL_POINTER "nil"
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}