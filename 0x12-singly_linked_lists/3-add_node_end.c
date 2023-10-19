#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
list_t *add_node_end(list_t **head, const char *str)
{
int index = 0;
list_t *new_node, *x;
extern char *strdup(const char *str);

while (str[index])
index++;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = index;
new_node->next = NULL;
if (strdup(str) == NULL)
{
free(new_node);
return (NULL);
}
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
else
{
x = *head;
while (x->next != NULL)
x = x->next;
x->next = new_node;
return (new_node);
}
}
