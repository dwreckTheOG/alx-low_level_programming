#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string using recursion.
 *
 * @s: The string for which to calculate the length.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
    {
        return (0);
    }
    else
    {
        return (1 + _strlen_recursion(s + 1));
    }
}

/**
 * is_palindrome - Check if a string is a palindrome.
 *
 * @s: The string to be checked.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    if (len <= 1)
        {
            return (1);
        }
    else if (s[0] != s[len - 1])
    {
        return (0);
    }
    else
    {
        s[len - 1] = '\0';
        return (is_palindrome(s + 1));
    }
}
