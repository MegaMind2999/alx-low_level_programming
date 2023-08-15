#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the dog struct
 * @name: name
 * @age: age
 * @owner: the owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strncpy(char *dest, char *src, int n);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
#endif
