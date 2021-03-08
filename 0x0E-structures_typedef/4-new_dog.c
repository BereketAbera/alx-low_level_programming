#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog awner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	newdog = malloc(sizeof(dog_t));

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
