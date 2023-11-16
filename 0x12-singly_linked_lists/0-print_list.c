#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *node = h;

size_t count = 0;

while (node != NULL)
{
if (node->str == NULL)
{
printf("[%d] (nil)\n", 0);
}
else
{
printf("[%u] %s\n", node->len, node->str);
}

count++;
node = node->next;
}

return (count);
}
