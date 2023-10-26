#include "main.h"
#include <stddef.h>
/**
 * print_binary - prints the binary representation of a number of n
 * @n: unsigned long int.
 * Return: null
 */
void print_binary(unsigned long int n)
{
if (n >> 0)
{
if (n >> 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
else
{
_putchar('0');
}
}
