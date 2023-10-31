#include "main.h"
#define BUFFER_SIZE 1024
/**
 * copy_file - copies the content of a file to another file
 *
 * @filename_from: the name of the source file
 * @filename_to: the name of the destination file
 *
 * Copies the content of the file `filename_from` to the file `filename_to`. If
 * the destination file does not exist, it is created. If the source file
 * cannot be read, an error is returned.
 *
 * Return : 0 on success, or a non-zero value on failure.
 */

int copy_file(const char *filename_from, const char *filename_to)
{
int fd_to;
int fd_from;
char buffer[BUFFER_SIZE];
ssize_t bytes_read;
ssize_t bytes_written;
if (filename_from == NULL || filename_to == NULL)
{
dprintf(STDERR_FILENO, "Usage: cp %s %s\n", filename_from, filename_to);
return (97);
}
fd_to = open(filename_to, O_WRONLY | O_TRUNC | O_CREAT, 0666);
if (fd_to < 0)
{
dprintf(STDERR_FILENO, "Error: Can't create file %s\n", filename_to);
return (99);
}

fd_from = open(filename_from, O_RDONLY);
if (fd_from < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename_from);
return (98);
}
while (1)
{
bytes_read = read(fd_from, buffer, BUFFER_SIZE);
if (bytes_read == 0)
{
break;
}
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename_to);
return (99);
}
}
close(fd_from);
close(fd_to);
return (0);
}

/**
 * main - copy content of one file into another
 * copy_file - copy content of one file into another
 * Return: EXIT_SUCCESS on success or exit with error number.
 */
int main(void)
{
int success = copy_file("my_file.txt", "new_file.txt");
if (success == 0)
{
printf("File copied successfully.\n");
}
else
{
printf("Error copying file.\n");
}
return (0);
}
