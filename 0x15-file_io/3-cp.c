#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * main - copies content from a file into another file
 * @argc: argument count
 * @argv: argument vector (array of args values)
 *
 * Return:  if success, else exit with specified code
 */
int main(int argc, char **argv)
{
	int fd_source, fd_dest, wr_bytes_count, dst_wr_count;
	char tempmemory[1024];

	if (argc != 3) /*if number of arguments is not correct*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_source = open(argv[1], O_RDONLY);/*file_from*/
	if (fd_source == -1)/*fd_source does't exist, or can't read it*/
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_dest = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((wr_bytes_count = read(fd_source, tempmemory, 1024)) > 0)
	{
		dst_wr_count = write(fd_dest, tempmemory, wr_bytes_count);
		if (fd_dest == -1 ||  dst_wr_count != wr_bytes_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);/*can't create or write to file_to fails*/
		}
	}
	if (wr_bytes_count == -1)
	{/*file_from doesn't exist, or can't read it*/
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_source) < 0) /*can't close fd_source (file_from)*/
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}
	if (close(fd_dest) < 0)/*can't close fd_dest (file_to)*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);/*success*/
}
