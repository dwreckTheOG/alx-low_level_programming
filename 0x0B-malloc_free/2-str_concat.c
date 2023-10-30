
#include "main.h"

int len(char *str);

/**
 * str_concat - Concatenate two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A string containing the concatenated s1 and s2, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int x1, x2;
	int i = 0;
	int size1, size2, totalsize;
	char *string;

	if (s1 == NULL)
	{
		return (NULL);
	}

	if (s2 == NULL)
	{
		return (NULL);
	}

	size1 = len(s1);
	size2 = len(s2);
	totalsize =  size1  + size2;

	if ((s1 != NULL) && (s2 == NULL))
	{
		string = malloc((sizeof(char) * size1) + 1);
		for (x1 = 0; x1 < size1; x1++)
		{
			string[x1] = s1[x1];
		}
		return (string);
	}
	else if ((s1 == NULL) && (s2 != NULL))
	{
		string = malloc((sizeof(char) * size2) + 1);
		for (x2 = 0; x2 < size2; x2++)
		{
			string[x2] = s2[x2];
		}
		return (string);
	}
	else if ((s1 != NULL) && (s2 != NULL))
	{
		string = malloc((sizeof(char) * totalsize) + 1);
		while (*s1 != '\0')
		{
			string[i] = *s1;
			i++;
			s1++;
		}
		while (*s2 != '\0')
		{
			string[i]  = *s2;
			i++;
			s2++;
		}
		return (string);
	}
	else
	{
		return (NULL);
	}
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
