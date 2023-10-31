#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"


void display_elf_header(const char *elf_filename)
{
int fd = open(elf_filename, O_RDONLY);
ssize_t bytes_read;
Elf64_Ehdr elf_header;
if (fd < 0)
{
fprintf(stderr, "Error opening ELF file: %s\n", elf_filename);
exit(98);
}
if (lseek(fd, 0, SEEK_SET) < 0)
{
fprintf(stderr, "Error seeking to beginning of ELF header: %s\n", elf_filename);
exit(98);
}
bytes_read = read(fd, &elf_header, sizeof(elf_header));
if (bytes_read < 0)
{
fprintf(stderr, "Error reading ELF header: %s\n", elf_filename);
exit(98);
}
if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "%s is not an ELF file.\n", elf_filename);
exit(98);
}
printf("ELF Header:\n");
printf("  Magic: 0x%08x\n", elf_header.e_ident[EI_MAG0] | elf_header.e_ident[EI_MAG1] << 8 |
elf_header.e_ident[EI_MAG2] << 16 | elf_header.e_ident[EI_MAG3] << 24);
printf("  Class: %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "64-bit" : "32-bit");
printf("  Data: %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "little-endian" : "big-endian");
printf("  Version: %d\n", elf_header.e_ident[EI_VERSION]);
printf("  OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
printf("  ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
printf("  Type: %d\n", elf_header.e_type);
printf("  Entry point address: 0x%016lx\n", elf_header.e_entry);

close(fd);
}
