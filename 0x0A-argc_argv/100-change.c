#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 for successful execution, 1 for errors.
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return (1);
    }

    int cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
        return (0);
    }

    int coins = 0;
    int denominations[] = {25, 10, 5, 2, 1};

    for (int i = 0; i < 5; i++) {
        coins += cents / denominations[i];
        cents %= denominations[i];
    }

    printf("%d\n", coins);

    return (0);
}
