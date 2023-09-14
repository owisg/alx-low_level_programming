#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: is the numbers of times the \ character
* shold be printed
*/
void print_diagonal(int n)
{
int i, j;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n - i + 1; j++)
{
if (j == i - 1 || j == n - i + 1)
{
_putchar('$');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
