#include "main.h"
/**
 * _strncpy - copies up to n characters from source to destination
 * @dest: The destination buffer where characters will be copied
 * @src: The source string from which characters will be copied
 * @n: The maximum number of characters to copy from 'src'
 *
 * Description:
 * This function copies up to 'n' characters from the 'src' string to the 'dest' buffer.
 * It ensures that the resulting string is null-terminated. If 'src' is shorter than 'n',
 * the remaining characters in 'dest' are filled with null bytes.
 *
 * Return: A pointer to the destination buffer 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *dest_start = dest;

    /* Copy up to 'n' characters from 'src' to 'dest.' */
    while (n > 0 && *src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    /* Fill the remaining characters in 'dest' with null bytes. */
    while (n > 0)
    {
        *dest = '\0';
        dest++;
        n--;
    }

    return dest_start;
}
