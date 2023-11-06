#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to the struct dog to print
 *
 * Description: tructure, or "nil" if any field is NULL.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
exit(98);
}

if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}

if (d->age < 0)
{
printf("Age: (nil)\n");
}
else
{
printf("Age: %.6f\n", d->age);
}

if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
