#include "main.h"
/**
* print_numbers - prints the numbers, from 0 to 9, followed by a new line
* followed by a new line
*/
void print_numbers(void)
{
int i;
_putchar('0');
for (i = 1; i <= 9; i++)
{
_putchar('0' + i);
}
_putchar('\n');
}
