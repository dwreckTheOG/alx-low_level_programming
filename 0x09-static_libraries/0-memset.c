#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: A pointer to the memory area to be filled
 * @b: The constant byte to fill the memory with
 * @n: The number of bytes to be filled
 *
 * Description:
 * This function fills the memory pointed to by 's' with the constant byte 'b'
 * up to 'n' bytes. It provides a way to initialize a block of memory with a
 * specified value.
 *
 * Return: A pointer to the memory area 's' (unchanged).
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;

    /* Fill the memory with 'b' for 'n' bytes. */
    while (n > 0)
    {
        *s = b;
        s++;
        n--;
    }

    return start;
}
