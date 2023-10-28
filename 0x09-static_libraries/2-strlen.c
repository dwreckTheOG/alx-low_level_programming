#include "main.h"
/**
 * _strlen - computes the length of a string
 * @s: The string for which to compute the length
 *
 * Return: The length of the string (number of characters)
 */
int _strlen(char *s)
{
    int length = 0;

    /*
     * Iterate through the string, counting characters until the
     * null terminator '\0' is encountered, indicating the end of
     * the string.
     */
    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}
