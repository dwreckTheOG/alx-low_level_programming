#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 1 for argument count error, and 2 for negative number of bytes error.
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return 1;
}

int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return 2;
}

print_opcodes(num_bytes);

return 0;
}

/**
 * print_opcodes - Prints the opcodes of a function.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(int num_bytes)
{
int i;
unsigned char *ptr = (unsigned char *)print_opcodes;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", ptr[i]);
}
printf("\n");
}
