#include <unistd.h>
#include <string.h>
/**
 * main - Entr point
 * Return: Always 0 (success)
 */
int main(void)
{
char buffer[58];
int i;
for (i = 0; i < 58; i++)
{
buffer[i] = '\0';
}
strncpy(buffer, "and that piece of art is useful - Dora Korpar, 2015-10-19", 58);
for (i = 0; buffer[i] != '\0'; i++)
{
write(2, &buffer[i], 1);
}
write(2, "\n", 1);
return (1);
}
