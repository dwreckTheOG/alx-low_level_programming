#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: The string to search within
 * @accept: The set of bytes to search for
 *
 * Description:
 * This function searches the string 's' for the first occurrence of any character in the
 * 'accept' string. It returns a pointer to the first character in 's' that matches any
 * character in 'accept.'
 *
 * Return: If a character in 'accept' is found in 's', a pointer to the first matching
 * character in 's' is returned. If no character in 'accept' is found, or if 'accept' is
 * empty or the null terminator '\0', a pointer to null is returned.
 */
char *_strpbrk(char *s, char *accept)
{
    /* Iterate through the string 's' until a character in 'accept' is found or the end of 's' is reached. */
    while (*s != '\0')
    {
        char *a = accept;
        while (*a != '\0')
        {
            if (*s == *a)
            {
                return s;
            }
            a++;
        }
        s++;
    }

    /* Return a pointer to null if no character in 'accept' is found, or if 'accept' is empty or the null terminator. */
    return NULL;
}
