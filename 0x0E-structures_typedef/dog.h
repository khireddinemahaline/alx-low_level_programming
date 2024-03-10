#ifndef _HEAD_
#define _HEAD_

/**
 * deg_t - new name for structure type deff alias
 */
typedef struct dog dog_t;

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
