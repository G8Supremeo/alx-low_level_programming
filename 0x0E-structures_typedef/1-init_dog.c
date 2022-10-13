#include "dog.h"

/**
  * init_dog - A function that initialize a variable of type struct dog
  * @d: name of struct pointer
  * @name: name of dog pointer
  * @age: age of dog
  * @owner: owner of dog pointer
  *
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
