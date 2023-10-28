#include "main.h"
/**
 * _islower - checks if a character is a lowercase letter
 * @c: The character to be checked
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise
 */
int _islower(int c)
{
    /*
     * Check if the character falls within the ASCII range of lowercase letters,
     * which is from 'a' (97) to 'z' (122). If it does, return 1, indicating it's a
     * lowercase letter; otherwise, return 0.
     */
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
