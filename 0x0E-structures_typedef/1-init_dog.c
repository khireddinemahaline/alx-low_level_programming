#include "dog.h"

/**
 * init_dog - dog initial variable
 * @d: a pinter point to struct dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
