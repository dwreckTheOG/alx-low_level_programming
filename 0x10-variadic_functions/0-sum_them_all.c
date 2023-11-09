#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of a variable number of integers.
 * @n: The number of integers to sum.
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
int sum = 0;

if (n == 0)
{return (0); }

va_start(args, n);

while (i < n)
{
sum = sum + va_arg(args, int);
i++;
}
va_end(args);
return (sum);


}
