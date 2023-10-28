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
    for (int i = 0; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            _putchar(argv[i][j]);
        }
        _putchar('\n');
    }

    return (0);
}
