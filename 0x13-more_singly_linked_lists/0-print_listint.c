#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
const listint_t *node = h;
size_t count = 0;

if (h == NULL)
{
return (0);
}

while (node != NULL)
{
printf("%d\n", node->n);
count++;
node = node->next;
}
return (count);
}
