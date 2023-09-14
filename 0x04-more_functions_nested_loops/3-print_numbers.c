#include "main.h"
/**
* print_numbers - prints the numbers from 0 to 9
* fonly using _putchar twice
* return: always 0 (seccess)
*/
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar('0' + i);
}
_putchar('\n');
}
