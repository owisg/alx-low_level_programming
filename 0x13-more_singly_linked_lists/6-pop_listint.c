#include "lists.h"


/**
*pop_listint - deletes the head node of a listint_t linked list
*@head: head of a linked list
*Return:  the head nodes data (n) or 0 if the linked list is empty
*/

int pop_listint(listint_t **head)
{

listint_t *temp = *head;
int n;
if (*head == NULL)
{
return (0);
}

n = (*head)->n;

*head = (*head)->next;
free(temp);

return (n);
}
