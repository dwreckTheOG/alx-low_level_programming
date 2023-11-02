#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (included) for the array.
 * @max: The maximum value (included) for the array.
 *
 * Return: A pointer to the newly created array or NULL on failure.
 */
int *array_range(int min, int max)
{
if (min > max)
{
return (NULL);
}

int *arr;
int size = max - min + 1;

arr = malloc(sizeof(int) * size);

if (arr == NULL)
{
return (NULL);
}

for (int i = 0; i < size; i++)
{
arr[i] = min + i;
}

return (arr);
}
