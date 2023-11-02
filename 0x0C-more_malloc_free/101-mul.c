#include <stdio.h>
#include <stdlib.h>

int is_digit(char *str);

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!is_digit(num1) || !is_digit(num2))
    {
        printf("Error\n");
        return 98;
    }

    unsigned long long int result = strtoull(num1, NULL, 10) * strtoull(num2, NULL, 10);

    printf("%llu\n", result);

    return (0);
}

/**
 * is_digit - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *str)
{
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0;
        }
        str++;
    }
    return 1;
}
