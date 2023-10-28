#include "main.h"
/**
 * _memcpy - copies memory area from source to destination
 * @dest: A pointer to the destination memory area
 * @src: A pointer to the source memory area
 * @n: The number of bytes to copy from 'src' to 'dest'
 *
 * Description:
 * This function copies 'n' bytes from the memory area pointed to by 'src' to the
 * memory area pointed to by 'dest.' The memory areas must not overlap. It provides
 * a way to copy a specified number of bytes from one memory area to another.
 *
 * Return: A pointer to the destination memory area 'dest.'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *dest_start = dest;

    /* Copy 'n' bytes from 'src' to 'dest.' */
    while (n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    return dest_start;
}
