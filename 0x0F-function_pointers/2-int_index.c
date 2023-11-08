#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array of integers to search.
 * @size: The number of elements in the array.
 * @cmp: A function to compare integers.
 * Return: The index of the first matching element, or -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{return (i); }
}
return (-1);
}
