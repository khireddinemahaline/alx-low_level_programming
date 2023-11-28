#include <stdio.h>
#include "dog.h"

/**
 * init_dog - entry func
 * @d : strct
 * @name  : naem of the dog
 * @age : age of the dog
 * @owner : owner of the dog
 * Return : no return
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
