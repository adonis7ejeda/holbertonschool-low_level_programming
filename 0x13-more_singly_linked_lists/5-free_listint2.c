#include "lists.h"

/**
 * free_listint2 - The function sets the head to NULL.
 * @head: head pointer.
 * Return: ntg.
 */

void free_listint2(listint_t **head)
{
listint_t *aux;
listint_t *current;

if (head == NULL)
return;
current = *head;
while (current != NULL)
{
aux = current->next;
free(current);
current = aux;
}
*head = NULL;
}
