#include "lists.h"

/**
*get_nodeint_at_index - function that returns the nth node of a listint_t list
*@index: nth node of a listint_t linked list
*@head: head of a listint_t linked list
*Return: pointer to list node or NULL if index is not present
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int i;
for (i = 0; i < index; i++)
{
if (current == NULL)
{
return (NULL);
}
current = current->next;
}

if (current == NULL)
{
return (head);
}

return (current);
}
