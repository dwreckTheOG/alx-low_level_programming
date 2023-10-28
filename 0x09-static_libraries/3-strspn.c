#include "main.h"
/**
 * _strspn - calculates the length of a prefix substring
 * @s: The string to be checked
 * @accept: The string containing characters to match
 *
 * Description:
 * This function calculates the length of the longest initial segment in the string 's'
 * that consists of characters present in the 'accept' string. It counts the number of
 * characters in 's' that match any character in 'accept' from the beginning of 's.'
 *
 * Return: The length of the initial segment in 's' that matches characters from 'accept.'
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int match_found;

    while (*s != '\0')
    {
        match_found = 0;
        while (*accept != '\0')
        {
            if (*s == *accept)
            {
                count++;
                match_found = 1;
                break;
            }
            accept++;
        }

        if (match_found == 0)
        {
            break;
        }

        s++;
        accept = accept - count;
    }

    return count;
}
