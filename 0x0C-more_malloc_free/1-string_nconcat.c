#include "main.h"


int slen(char *s);

/**
 * string_nconcat - Concatenates two strings with a specified length.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of characters to concatenate from s2.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len_s1 = slen(s1);
unsigned int len_s2 = slen(s2);
int x = 0;
int i;

if (s1 == NULL)
{s1 = ""; }
if (s2 == NULL)
{s2 = ""; }

if (n >= len_s2)
{n = len_s2; }

char *array = malloc(len_s1 + n + 1);

if (array == NULL)
{return (NULL); }

for (i = 0; i < len_s1; i++)
{array[x++] = s1[i]; }

for (i = 0; i < n; i++)
{array[x++] = s2[i]; }

array[x] = '\0';

return (array);
}

/**
 * slen - Calculates the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int slen(char *s)
{
int x = 0;
while (s[x] != '\0')
{x++; }
return (x);
}
