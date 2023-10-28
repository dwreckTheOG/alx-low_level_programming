#include "main.h"
/**
 * _strcpy - copies a string from source to destination
 * @dest: The destination buffer where the string will be copied
 * @src: The source string to be copied
 *
 * Description:
 * This function copies the characters from the 'src' string to the 'dest' buffer.
 * It copies all characters from 'src,' including the null terminator, to 'dest.'
 * The 'dest' buffer should have enough space to accommodate the entire 'src' string.
 *
 * Return: A pointer to the destination buffer 'dest.'
 */
char *_strcpy(char *dest, char *src)
{
    char *dest_start = dest;

    /*
     * Copy characters from 'src' to 'dest' until the null terminator '\0' is encountered
     * in 'src,' indicating the end of the string. Make sure to copy the null terminator
     * as well to ensure that 'dest' is a valid C string.
     */
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; /* Add the null terminator to 'dest' to terminate the string. */

    return dest_start;
}
