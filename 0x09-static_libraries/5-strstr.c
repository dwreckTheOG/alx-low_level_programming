#include "main.h"
/**
 * _strstr - locates a substring within a string
 * @haystack: The string to search within
 * @needle: The substring to search for
 *
 * Description:
 * This function searches the string 'haystack' for the first occurrence of the substring
 * 'needle.' It returns a pointer to the first character in 'haystack' where 'needle' begins.
 * If 'needle' is an empty string, the function returns a pointer to the beginning of 'haystack.'
 * If 'needle' is not found in 'haystack,' the function returns a pointer to null.
 *
 * Return: A pointer to the first occurrence of 'needle' in 'haystack,' or a pointer to null if 'needle' is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *h, *n;

    /* If 'needle' is an empty string, return a pointer to the beginning of 'haystack.' */
    if (*needle == '\0')
    {
        return haystack;
    }

    /* Iterate through 'haystack' until a possible match of 'needle' is found. */
    while (*haystack != '\0')
    {
        h = haystack;
        n = needle;

        /* Check if the characters in 'haystack' and 'needle' match. */
        while (*n != '\0' && *h == *n)
        {
            h++;
            n++;
        }

        /* If 'needle' was fully traversed, a match is found. Return the position in 'haystack.' */
        if (*n == '\0')
        {
            return haystack;
        }

        haystack++;
    }

    /* Return a pointer to null if 'needle' is not found in 'haystack.' */
    return NULL;
}
