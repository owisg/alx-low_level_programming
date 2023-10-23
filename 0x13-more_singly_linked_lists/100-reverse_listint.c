#include "lists.h"
/**
*reverse_listint - reverses a listint_t linked list
*@head: head of a linked list
*Return: pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous = NULL;
listint_t *current = *head;
listint_t *next = current->next;
while (current != NULL) {
/*listint_t *next = current->next;*/
current->next = previous;
previous = current;
current = next;
}

*head = previous;
return (*head);
}
