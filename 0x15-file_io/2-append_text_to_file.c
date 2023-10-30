#include "main.h"
#include <string.h>


int append_text_to_file(const char *filename, char *text_content)
{
ssize_t bytes_written;
struct stat st;
int fd;
if (filename == NULL)
{
return (-1);
}

if (stat(filename, &st) != 0)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
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
