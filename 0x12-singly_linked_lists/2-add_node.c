#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds a node
 * @head: head address, dereferenced
 * @str: string
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
size_t size = 0;
list_t *new = malloc(sizeof(list_t));
extern char *strdup(const char *str);
if (new == NULL)
return (NULL);
new->next = *head;
new->str = strdup(str);
if (new->str)
while (new->str[size])
++size;
new->len = size;
*head = new;
return (new);
}
