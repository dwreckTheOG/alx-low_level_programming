#include "function_pointers.h"

/**
 * array_iterator - Apply a function to each element of an array.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @action: A function to be applied to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (array == NULL || action == NULL)
return;


while (i < size)
{
action(array[i]);
i++;
}
}
