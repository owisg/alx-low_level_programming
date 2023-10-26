#include "main.h"
/**
 * print_binary - prints the binary equivalent of n
 * @n: unsigned long int.
 * Return: void
 */

void print_binary(unsigned long int n)
{
int i;
char binary[33];
if (n == 0)
{
_putchar('0');
return;
}

/*char binary[33];*/

for (i = 31; i >= 0; i--)
{

unsigned long int bit = (n >> i) & 1;

binary[i] = bit + '0';
}

for (i = 0; i < 33; i++)
{
_putchar(binary[i]);
}
}
