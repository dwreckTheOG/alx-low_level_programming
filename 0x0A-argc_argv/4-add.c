#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 for successful execution, 1 for errors.
 */
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("0\n");
        return (0);
    }

    int sum = 0;

    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            if (!isdigit(argv[i][j])) {
                printf("Error\n");
                return (1);
            }
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);

    return (0);
}
