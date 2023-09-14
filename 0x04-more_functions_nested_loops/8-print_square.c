#include "main.h"
/**
* print_square - prints a square using character #
* @size: is the size of the square
* shold be printed
*/
void print_square(int size)
{
if (size <= 0)
_putchar('\n');
else
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
_putchar('#');
_putchar('\n');
}
}
}
