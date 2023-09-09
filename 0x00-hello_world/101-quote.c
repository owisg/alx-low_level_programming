#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entr point
 * Return: Always 0 (success)
 */
int main(void)
{
char buffer[50];
int i;
strcpy(buffer, "and that piece of art is useful");
for (i = 0; i < (int) strlen(buffer); i++)
{
write(2, &buffer[i], 1);
}
write(2, "\n", 1);
return (1);
}
