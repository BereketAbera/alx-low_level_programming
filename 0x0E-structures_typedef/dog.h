#ifndef DOGTY
#define DOGTY
/**
 * struct dog - dog type
 * @name: dog namae
 * @age: dog age
 * @owner: dog owner
 *
 * Description - declare dog type
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
