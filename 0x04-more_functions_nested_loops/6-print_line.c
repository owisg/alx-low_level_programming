#include "main.h"
/**
* print_line - draws a straight line in the terminal
* @n: is the numbers of times the _ character
* shold be printed
*/
void print_line(int n)
{
int lnchar;
if (n <= 0)
_putchar('\n');
else
{
for (lnchar = 1; lnchar <= n; lnchar++)
_putchar('_');
_putchar('\n');
}
}
