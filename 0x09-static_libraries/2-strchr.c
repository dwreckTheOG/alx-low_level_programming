#include "main.h"
/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: The string to search within
 * @c: The character to search for
 *
 * Description:
 * This function searches the string 's' for the first occurrence of the character 'c'.
 *
 * Return: If 'c' is found, a pointer to the first occurrence of 'c' within 's' is returned.
 * If 'c' is not found, or if 'c' is the null terminator '\0', a pointer to null is returned.
 */
char *_strchr(char *s, char c)
{
    /* Iterate through the string 's' until 'c' is found or the end of the string is reached. */
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s;
        }
        s++;
    }

    /* Return a pointer to null if 'c' is not found or if 'c' is the null terminator. */
    if (c == '\0')
    {
        return s;
    }

    return NULL;
}
