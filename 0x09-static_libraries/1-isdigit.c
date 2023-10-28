#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0-9)
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    /*
     * Check if the character is a digit by verifying if it falls within
     * the ASCII range of digits, which is from '0' (48) to '9' (57).
     * If it does, return 1, indicating it's a digit; otherwise, return 0.
     */
    if (c >= '0' && c <= '9')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
