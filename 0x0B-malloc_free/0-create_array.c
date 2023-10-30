#include "main.h"

/**
 * create_array - Creates an array of characters and initializes it with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the newly created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	/* Check if the size is zero and return NULL if it is */
	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array */
	array = malloc(sizeof(char) * size);

	/* Initialize the array elements with the specified character */
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	/* Return a pointer to the allocated and initialized array */
	return (array);
}
