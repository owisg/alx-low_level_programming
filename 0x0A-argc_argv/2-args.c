#include <stdio.h>
/**
 * main -  prints the number of arguments passed into it
 * @argc: int
 * @argv: list
 * Return: 0
 */
#include <stdio.h>
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
