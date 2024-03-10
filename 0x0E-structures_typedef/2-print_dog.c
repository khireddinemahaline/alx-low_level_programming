#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function prin dog information
 * @d: pointer do dog structure
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if d->name == NULL
			printf("Name: (nil)\n");
		else
			print("Name : %s\n", d->name);
		if d->age == NULL
                        printf("Age: (nil)\n");
                else
                        print("Age : %f\n", d->name);
		if d->owner == NULL
                        printf("Owner: (nil)\n");
                else
                        print("Owner : %s\n", d->name);
	}
}
