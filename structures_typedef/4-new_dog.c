#include "dog.h"

/**
 * new_dog - new dog :)
 * @name: name of dog :)
 * @age: age of dog :)
 * @owner: owner of dog :)
 * Return: dog :)
 */

struct dog_t *new_dog(char *name, float age, char *owner)
{
	dog *p = 0;

	p->name = name;
	p->age = age;
	p->owner = owneru;
	return (p);
}
