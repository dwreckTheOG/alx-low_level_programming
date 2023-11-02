#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;
unsigned int copy_size = old_size < new_size ? old_size : new_size;
if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
return malloc(new_size);
}

if (new_size == old_size)
{
return (ptr);
}

new_ptr = malloc(new_size);

if (new_ptr == NULL)
{return NULL; }

for (i = 0; i < copy_size; i++)
{
((char *)new_ptr)[i] = ((char *)ptr)[i];
}

free(ptr);

return (new_ptr);
}
