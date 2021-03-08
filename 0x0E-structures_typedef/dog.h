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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
