#include "variadic_functions.h"


/**
 * print_all - Print anything based on the provided format.
 * @format: A string containing the format specifiers for the arguments.
 * @...: The variable arguments to be printed.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
const char *ptr_format = format;
va_start(args, format);

while (format != NULL && *ptr_format != '\0')
{
switch (*ptr_format)
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
printf("%s(nil)", separator);
else
printf("%s%s", separator, str);
}
break;
default:
i++;
ptr_format++;
continue;
}
separator = ", ";
i++;
ptr_format++;
}
va_end(args);

printf("\n");
}
