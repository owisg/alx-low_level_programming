#include <stdio.h>
/**
 * main - Entr point
 * Return: Always 0 (success)
 */
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
if (num1 < num2) {
putchar(num1 + '0');
putchar(',');
putchar(num2 + '0');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
