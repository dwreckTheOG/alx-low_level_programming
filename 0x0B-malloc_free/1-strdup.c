
#include "main.h"

int len(char *str);

/**
 * _strdup - Duplicate a string using dynamic memory allocation
 * @str: The input string to duplicate
 *
 * Return: A pointer to the duplicated string or NULL on failure.
 */
char *_strdup(char *str)
{
	char *string;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	size = len(str);
	string = malloc(sizeof(char) * (size + 1));

	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		string[i] = str[i];
	}
	return (string);
}

/**
 * len - Calculate the length of a string
 * @str: The input string
 *
 * Return: The length of the string.
 */
int len(char *str)
{
	int total = 0;

	while (*str != '\0')
	{
		total++;
		str++;
	}
	return (total);
}
