#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer for which to compute the absolute value
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
    /*
     * Check if the input integer is negative. If it is, return its negation
     * to obtain the absolute value; otherwise, return the integer itself.
     */
    if (n < 0)
    {
        return (-n);
    }
    else
    {
        return (n);
    }
}
