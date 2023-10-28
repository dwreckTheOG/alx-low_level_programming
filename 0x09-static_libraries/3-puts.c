#include "main.h"
/**
 * _puts - prints a string to standard output
 * @s: The string to be printed
 *
 * Description:
 * This function prints the characters in the input string 's' to
 * standard output, followed by a newline character.
 */
void _puts(char *s)
{
    /*
     * Loop through the characters in the string 's' until the null
     * terminator '\0' is encountered, indicating the end of the string.
     * Print each character to standard output.
     */
    while (*s != '\0')
    {
        _putchar(*s);
        s++;
    }

    /* Print a newline character to end the line. */
    _putchar('\n');
}
