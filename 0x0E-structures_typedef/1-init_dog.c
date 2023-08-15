#include "dog.h"
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * init_dog - initializeing  variable of type struct dog.
 * @d: pointer to struct
 * @name:name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			return;
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
