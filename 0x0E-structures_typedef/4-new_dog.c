#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - A function that creates a new dog.
  * @name: name of dog
  * @age: age of dog
  * @owner: of dog
  *
  * Return: NULL if malloc fails else pointer to allocated memory
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	dog->name = malloc(sizeof(char) * i);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		dog->name[j] = name[j];
	dog->age = age;
	for (i = 0; owner[i]; i++)
		;
	i++;
	dog->owner = malloc(sizeof(char) * i);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog->owner[k] = owner[k];

	return (dog);
}
