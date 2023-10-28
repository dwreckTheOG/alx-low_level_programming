#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: The string to be converted
 *
 * Description:
 * This function converts the string 's' to an integer. It takes into account
 * both positive and negative integers. The conversion stops when a non-digit
 * character is encountered or when the end of the string is reached. The
 * function does not handle integer overflow.
 *
 * Return: The converted integer. If no valid integer is found, 0 is returned.
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    /* Handle leading whitespace characters, if any. */
    while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
    {
        i++;
    }

    /* Check for an optional sign ('+' or '-'). */
    if (s[i] == '-' || s[i] == '+')
    {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    /* Convert the digits to an integer. */
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}
