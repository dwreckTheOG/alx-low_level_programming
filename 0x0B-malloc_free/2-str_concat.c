#include "main.h"

/**
 * str_concat - Concatenate two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A string containing the concatenated s1 and s2, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i = 0;
	int totalSize, j;
	char *string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	totalSize = size1 + size2 + 1;
	string = malloc(sizeof(char) * totalSize);

	if (string == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size1; j++)
	{
		string[i] = s1[j];
		i++;
	}
	for (j = 0; j < size2; j++)
	{
		string[i] = s2[j];
		i++;
	}
	string[i] = '\0';

	return (string);
}
