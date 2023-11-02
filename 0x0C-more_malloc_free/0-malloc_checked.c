#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, the program exits with status 98
 */
void *malloc_checked(unsigned int b)
{
void *mem;

mem = malloc(b);

if (mem == NULL)
{exit(98); }

return (mem);
}
