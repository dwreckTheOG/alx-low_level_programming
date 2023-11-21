#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely, handling loops.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *temp;
size_t count = 0;

if (h == NULL || *h == NULL)
{
return (0);
}

current = *h;

while (current != NULL)
{
temp = current;
current = current->next;

if ((size_t)temp <= (size_t)current)
{
*h = NULL;
return (count + 1);
}

free(temp);
count++;
}

*h = NULL;

return (count);
}
