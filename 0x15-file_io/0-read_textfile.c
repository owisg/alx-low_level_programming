#include "main.h"

/**
*read_textfile - reads a text file and prints it to the Stdout
*@filename: path od a filename
*@letters: number to letters to read and write
*Return: 0 if 'filename is NULL or cannot be open, read or write
*or number of bytes used to call write
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file = fopen(filename, "r");
ssize_t bytes_read = 0;
char c;
if (filename == NULL)
{
return (0);
}

if (file == NULL)
{
return (0);
}
while ((c = fgetc(file)) != EOF)
{
if ((ssize_t)letters <= bytes_read)
{
break;
}
_putchar(c);
bytes_read++;
}
fclose(file);
return (bytes_read);
}
