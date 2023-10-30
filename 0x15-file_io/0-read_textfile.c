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
char *buffer = malloc(letters);
ssize_t bytes_read = fread(buffer, 1, letters, file);
if (filename == NULL)
{
return (0);
}

if (file == NULL)
{
return (0);
}

if (buffer == NULL)
{
return (0);
}

if (bytes_read == 0)
{
free(buffer);
return (0);
}
fwrite(buffer, 1, bytes_read, stdout);
free(buffer);
fclose(file);
return (bytes_read);
}
