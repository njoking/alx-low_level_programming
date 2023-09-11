#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog -  a function that initialize a variable of type struct dog
 * initialized
 *
 * @d: struct in question
 * @name: character in question
 * @age: dogs age
 * @owner: dogs owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;

}
