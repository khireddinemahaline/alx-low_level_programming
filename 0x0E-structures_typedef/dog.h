#ifndef _HEAD_
#define _HEAD_

/**
 * deg_info - structure type deff alias
 */
typedef struct dog dog_info;

/**
 * struct dog - structure og dog information
 * @name: name of the dog
 * @age: dog age
 * @owner: the owner of dog
 * Descreption: information dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
