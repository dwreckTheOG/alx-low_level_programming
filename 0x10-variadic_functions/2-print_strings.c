#include "variadic_functions.h"

/**
 * print_strings - Print a variable number of strings with a separator.
 * @separator: The string to be printed between strings.
 * @n: The number of strings to print.
 * ...: The variable arguments representing the strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list str;
unsigned int i;
char *current_str;
va_start(str, n);

for (i = 0; i < n; i++)
{
current_str = va_arg(str, char *);

if (current_str == NULL)
{printf("nil"); }
else
{printf("%s", current_str); }

if (separator != NULL && i < n - 1)
{printf("%s", separator); }
}
printf("\n");
va_end(str);
}
