#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -  a function that creates a new dog.
 * @name: the dog name
 * @age: age of the dog
 * @owner: the dog owner
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return NULL;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return NULL;

	dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return NULL;
	}

	dog->owner = malloc(strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return NULL;
	}

	strcpy(dog->name, name);
	dog->age = age;
	strcpy(dog->owner, owner);

	return dog;
}
