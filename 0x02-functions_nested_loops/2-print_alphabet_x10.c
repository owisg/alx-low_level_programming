#include "main.h"
/**
* print_alphabet for ten times- print all alpphabet in lowercase
*/
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
print_alphabet();
}
}
void print_alphabet(void) {
char c;
for (c = 'a'; c <= 'z'; c++) {
_putchar(c);
}
_putchar('\n');
}
