#include "main.h"

/**
 * get_bit - return value of specified bit
 * @n: unsigned long int input.
 * @index: index of the bit.
 * Return:  the value of the bit at index index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= 32)
{
return (-1);
}

n >>= index;
return (n & 1);
}
