#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip to next number
 * @n: unsigned long int num one
 * @m: unsigned long int num two
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int mask = n ^ m;
while (mask)
{
count += mask & 1;
mask >>= 1;
}
return (count);
}
