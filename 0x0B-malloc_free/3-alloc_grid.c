#include "main.h"

int **alloc_grid(int width, int height)
{
	int x, y;
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
		sw ++;
	}
	return (array);
}