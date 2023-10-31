#include "main.h"

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the 2D array, or NULL on failure or invalid input.
 */
int **alloc_grid(int width, int height)
{
	int sw = 0, sh = 0;
	int **array;

	if ((width <= 0) && (height <= 0))
		return (NULL);
	array = (int **)malloc(sizeof(int *) * width);
	if (array == NULL)
		return (NULL);
	while (sw < width)
	{
		array[sw] = (int *)malloc(sizeof(int) * height);
		if (array[sw] == NULL)
		{
			while (sh < height)
			{
				free(array[sh]);
			}
			free(array);
			return (NULL);
		}
		while (sh < height)
		{
			array[sw][sh] = 0;
			sh++;
		}
		sh = 0;
		sw++;
	}
	return (array);
}
