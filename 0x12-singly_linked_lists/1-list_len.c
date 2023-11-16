#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
const list_t *node = h;
int count = 0;

while (node != NULL)
{
count++;
node = node->next;
}
return (count);
}
