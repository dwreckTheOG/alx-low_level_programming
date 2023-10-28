#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: The destination string to which 'src' will be appended
 * @src: The source string to be appended to 'dest'
 *
 * Description:
 * This function appends the characters from the 'src' string to the end of the
 * 'dest' string. The function assumes that 'dest' has enough space to accommodate
 * both 'dest' and 'src' strings, and it ensures that the resulting string is
 * null-terminated.
 *
 * Return: A pointer to the concatenated string (the modified 'dest').
 */
char *_strcat(char *dest, char *src)
{
    char *dest_start = dest;

    /* Find the end of the 'dest' string. */
    while (*dest != '\0')
    {
        dest++;
    }

    /* Append the characters from 'src' to 'dest' until the end of 'src' is reached. */
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; /* Null-terminate the concatenated string. */

    return dest_start;
}
