#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 * of a listint_t linked list.
 * @head: head pointer.
 * @idx: position of the node that will be returned.
 * @n: data
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *current;
listint_t *new;

if (head == NULL)
return (NULL);
if (idx != 0)
{
current = *head;
while (current != NULL)
{
if (i == idx - 1)
break;
current = current->next;
i++;
}
if (current == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
new->next = current->next;
current->next = new;
return (new);
}
