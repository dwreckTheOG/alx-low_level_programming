
#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 98 for argument count error, and 99 for unrecognized operator.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char *operator;
if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];

if (get_op_func(operator) == NULL)
{
printf("Error\n");
return (99);
}

result = get_op_func(operator)(num1, num2);
printf("%d\n", result);

return (0);
}
