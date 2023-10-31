#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
    if (ac <= 0 || av == NULL)
        return (NULL);

    int total_length = 0;
    for (int i = 0; i < ac; i++) {
        int arg_length = 0;
        while (av[i][arg_length] != '\0') {
            arg_length++;
        }
        total_length += arg_length + 1;
    }

    char *concatenated_str = (char *)malloc(total_length + 1); // Add 1 for the terminating null byte.
    if (concatenated_str == NULL)
        return (NULL);

    int position = 0;
    for (int i = 0; i < ac; i++) {
        int j = 0;
        while (av[i][j] != '\0') {
            concatenated_str[position] = av[i][j];
            position++;
            j++;
        }
        concatenated_str[position] = '\n';
        position++;
    }

    concatenated_str[position] = '\0';

    return concatenated_str;
}
