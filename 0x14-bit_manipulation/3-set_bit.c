#include "main.h"

/**
 * set_bit - sets bit value to 1 for specified index
 * @n: unsigned long int pointer
 * @index: bit index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= 32)
{
return (-1);
}

*n |= (1 << index);

return (1);
}
