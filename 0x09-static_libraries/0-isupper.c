#include "main.h"

/**
 * _isupper - checks if a character is an uppercase letter
 * @c: The character to be checked
 *
 * Return: 1 if c is an uppercase letter, 0 otherwise
 */
int _isupper(int c)
{
    /*
     * Check if the character falls within the ASCII range of uppercase letters,
     * which is from 'A' (65) to 'Z' (90). If it does, return 1, indicating it's
     * an uppercase letter; otherwise, return 0.
     */
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
