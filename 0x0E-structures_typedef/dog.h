#ifndef DOG
#define DOG

#include <stdio.h>
#include <stddef.h>
/**
 * struct dog - structure for dog
 * @name: name of the dog
 * @age: age oof the dog
 * @owner: owner of the dog
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
