#include "dog.h"

/**
 * init_dog - dog :)
 * @d: dog :)
 * @name: dog :)
 * @age: dog :)
 * @owner: dog :)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d[1] = "";
	d->name = name;
	d->age = age;
	d->owner = owner;
}
