#include "main.h"

/**
 * _isalpha - checks if a character is an alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
    /*
     * Check if the character is a letter (uppercase or lowercase) by
     * verifying if it falls within the ASCII range of letters. The range
     * for uppercase letters is from 'A' (65) to 'Z' (90), and the range
     * for lowercase letters is from 'a' (97) to 'z' (122).
     */
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
