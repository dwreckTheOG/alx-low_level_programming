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
    int count = argc - 1;  // Subtract 1 to exclude the program name argument

    if (count < 10) {
        putchar(count + '0');  // Convert count to a character and print it
        putchar('\n');
    } else {
        char digit;
        while (count > 0) {
            digit = count % 10 + '0';
            count /= 10;
            putchar(digit);
        }
        putchar('\n');
    }

    return (0);
}
