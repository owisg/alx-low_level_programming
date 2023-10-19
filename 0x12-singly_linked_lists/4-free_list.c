#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a lists
 * @head: head of list
 */
void free_list(list_t *head)
{
list_t *next;

while (head)
{
next = head->next;
free(head->str);
free(head);
head = next;
}
}
