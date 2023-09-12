#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alpphabet in lowercase
* followed by a new line
*/
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
print_alphabet();
}
}
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
