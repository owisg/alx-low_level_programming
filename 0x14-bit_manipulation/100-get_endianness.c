#include "main.h"
#include <stdio.h>

/**
*get_endianness - function that checks the endianness.
*Return: 0 or 1
*/

int get_endianness(void)
{
unsigned int num = 1;
char *endian = (char *)&num;

if (*endian == 1)
{
return (1);
}
else
{
return (0);
}
}
