#include <stdio.h>
#include "lists.h"
/**
*print_list - print string and length of string for each element of 'h'
*@h: pointer to first element of list
*Return: length of list
*/
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
printf("[%d] %s\n", h->len, h->str);

h = h->next;
++count;

}

return (count);
}
