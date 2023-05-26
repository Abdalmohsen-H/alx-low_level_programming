#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

/**
 *prnt_hx_byts - prnt as hex
 *@byts : inpt bytes
 *@numb_byts : input number of bytes
 */
void prnt_hx_byts(unsigned char *byts, size_t numb_byts)
{size_t k;
	for (k = 0; k < numb_byts; k++)
	{
		printf("%02x ", byts[k]);
	}
	printf("\n");
}
/**
 *gt_lf_typ_strn - get corresponding text
 * for inout elf type
 *@e_type : input elf type
 *Return: string
 */
char *gt_lf_typ_strn(uint16_t e_type)
{
	switch (e_type)
	{
		case ET_NONE: return "NONE (No file type)";
		case ET_REL: return "REL (Relocatable file)";
		case ET_EXEC: return "EXEC (Executable file)";
		case ET_DYN: return "DYN (Shared object file)";
		case ET_CORE: return "CORE (Core file)";
		default: return "Unknown";
	}
}
/**
 *main - show info about elf hdr
 *advanced task for i/o project
 *@argscont: args cont
 *@argsvec : args vectr
 *Return: 0 if success , else 98
 */
int main(int argscont, char *argsvec[])
{Elf64_Ehdr ef_hdr;
	int fildsc_o;

	if (argscont != 2)
	{fprintf(stderr, "Usage: %s then elf_filename\n", argsvec[0]);
		exit(98);
	}

	fildsc_o = open(argsvec[1], O_RDONLY);
	if (fildsc_o < 0)
	{
		perror("open error");
		exit(98);
	}
	if (read(fildsc_o, &ef_hdr, sizeof(ef_hdr)) != sizeof(ef_hdr))
	{perror("read error");
		exit(98);
	}

	printf("ELF Header:\n");/*just required info*/
	printf("  Magic:");
	prnt_hx_byts(ef_hdr.e_ident, EI_NIDENT);
	printf("  Class:                             %s\n",
			ef_hdr.e_ident[EI_CLASS] == ELFCLASS32 ?
			"ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			ef_hdr.e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "Unknown");
	printf("  Version:                           %d (current)\n",
			ef_hdr.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
			ef_hdr.e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX - System V" : "Unknown");
	printf("  ABI Version:                       %d\n",
			ef_hdr.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			gt_lf_typ_strn(ef_hdr.e_type));
	printf("  Entry point address:               %#x\n",
			(unsigned int)ef_hdr.e_entry);
	close(fildsc_o);
	return (0);/*success*/
}
