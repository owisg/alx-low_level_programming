#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters) {
FILE *file = fopen(filename, "r");
ssize_t bytes_read = 0;
  char c;
  if (filename == NULL) {
    return 0;
  }

  if (file == NULL) {
    return 0;
  }


  
  while ((c = fgetc(file)) != EOF) {

    if ((ssize_t)letters <= bytes_read) {
      break;
    }

    _putchar(c);

    bytes_read++;
  }

  fclose(file);

  return bytes_read;
}
