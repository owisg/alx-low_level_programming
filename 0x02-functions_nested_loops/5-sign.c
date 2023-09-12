#include "main.h"
/**
* print_sign - prints the sign of a number
* @n: the int to check
* Return: 1 and prints + if  is greater than zero
* 0 and and prints 0 if n is zero
* -1 and prints - if n is less than zero
*/
int print_sign(int n)
{
int ret = 0;
if (n > 0)
{
ret = 1;
}
else if (n == 0)
{
ret = 0;
}
else
{
ret = -1;
}
_putchar(ret == 1 ? '+' : ret == 0 ? '0' : '-');
return (ret);
}
