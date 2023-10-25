#include "main.h"

/**
 * _puts_recursion - Recursively print a string followed by a newline.
 *
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
