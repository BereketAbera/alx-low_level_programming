#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog memory
 * @d: dog pointer
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
