#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - Read a text file and print to STDOUT
 * @filename: File name pointer
 * @letters: Number of characters to read
 * Return: 0 if file name is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
int fd;
ssize_t r, w;

if (filename == NULL)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
fd = open(filename, O_RDWR);
if (fd == -1)
{
free(buf);
return (0);
}
r = read(fd, buf, letters);
if (r == -1)
{
free(buf);
close(fd);
return (0);
}
close(fd);
w = write(STDOUT_FILENO, buf, r);
if (w == -1)
{
free(buf);
return (0);
}
if (w != r)
return (0);
return (r);
}
