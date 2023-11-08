#include "3-calc.h"

/**
 * get_op_func - Selects the appropriate function for the given operator.
 * @s: The operator as a string.
 *
 * Return: A function pointer corresponding to the operator, or NULL if
 * the operator is invalid or not recognized.
 */
int (*get_op_func(char *s))(int, int)
{
if (s == NULL || s[1] != '\0')
{
return NULL;
}

switch (*s)
{
case '+':
return (op_add);
case '-':
return (op_sub);
case '*':
return (op_mul);
case '/':
return (op_div);
case '%':
return (op_mod);
default:
return NULL;
}
}
