#include "main.h"

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[]) {
    if (argc > 0) {
        while (*argv[0] != '\0') {
            _putchar(*argv[0]);
            argv[0]++;
        }
        _putchar('\n');
    } else {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
    }

    return (0);
}
