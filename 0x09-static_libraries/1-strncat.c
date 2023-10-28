#include "main.h"
/**
 * _strncat - concatenates n characters from one string to another
 * @dest: The destination string to which 'src' will be appended
 * @src: The source string from which characters will be appended to 'dest'
 * @n: The maximum number of characters to concatenate from 'src'
 *
 * Description:
 * This function appends the first 'n' characters from the 'src' string to the end of the
 * 'dest' string. The function assumes that 'dest' has enough space to accommodate the
 * concatenated characters and ensures that the resulting string is null-terminated.
 *
 * Return: A pointer to the concatenated string (the modified 'dest').
 */
char *_strncat(char *dest, char *src, int n)
{
    char *dest_start = dest;

    /* Find the end of the 'dest' string. */
    while (*dest != '\0')
    {
        dest++;
    }

    /*
     * Append the first 'n' characters from 'src' to 'dest' until the end of 'src' is
     * reached or 'n' characters have been copied. Ensure null-termination.
     */
    while (*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0'; /* Null-terminate the concatenated string. */

    return dest_start;
}
