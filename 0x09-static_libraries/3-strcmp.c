#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Description:
 * This function compares the strings 's1' and 's2' character by character until
 * a difference is found or until the end of either string is reached. It returns
 * an integer value indicating the comparison result:
 * - 0 if the strings are equal.
 * - A positive value if 's1' is greater (comes after 's2' in lexicographic order).
 * - A negative value if 's2' is greater (comes after 's1' in lexicographic order).
 *
 * Return: An integer value indicating the comparison result.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            return (*s1 - *s2);
        }

        s1++;
        s2++;
    }

    return (*s1 - *s2);
}
