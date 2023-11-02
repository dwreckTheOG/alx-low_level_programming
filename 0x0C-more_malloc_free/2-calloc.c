#include "main.h"

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size in bytes of each element
 *
 * Return: A pointer to the allocated memory (or NULL on failure)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
{return (NULL); }

void *ptr = malloc(nmemb * size);

if (ptr == NULL)
{return (NULL); }


memset(ptr, 0, nmemb * size);

return (ptr);
}
