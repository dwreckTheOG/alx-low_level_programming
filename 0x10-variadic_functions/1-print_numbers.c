#include "variadic_functions.h"

/**
 * print_numbers - Print a variable number of integers with a separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to print.
 * ...: The variable arguments representing the integers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int i;
va_start(num, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(num, int));

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

printf("\n");

va_end(num);
}
