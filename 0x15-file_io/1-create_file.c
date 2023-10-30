#include "main.h"
#include <string.h>

/**
*create_file - function that creates a file
*@filename: path of a file to create
*@text_content: content to insert into file
*Return: 1 on success, -1 if error occurs
*/

int create_file(const char *filename, char *text_content)
{
struct stat st;
int fd;
ssize_t bytes_written;
if (filename == NULL)
{
return (-1);
}

if (stat(filename, &st) == 0)
{
fd = open(filename, O_WRONLY | O_TRUNC);
if (fd < 0)
{
return (-1);
}
close(fd);
}
fd = open(filename, O_WRONLY | O_CREAT, 0600);
if (fd < 0)
{
return (-1);
}
if (text_content != NULL)
{
bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written < 0)
{
close(fd);
return (-1);
}
}
close(fd);

return (1);
}
