#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - func to read a text file then
 * prints it to standard output.
 *
 * @letters: input number of letters this func.
 * should read then print it to stdout
 *
 * @filename: input filname and its path
 *
 * Return: actual number of letters this func could read then print it.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tempmemory;
	int  fd_open;
	ssize_t bytes_written_counter, read_bytes;

	if (filename == NULL)/*check if filename is NULL or not*/
		return (0);
	/* Open input file using open () on read only mode*/
	/* to get file descriptor which is a reference to input file*/
	fd_open = open(filename, O_RDONLY);/*store file descriptor to fd_open*/
	if (fd_open == -1)/*check if open failed or not*/
		return (0);
	/* temp. memory (also called buffer),will used later to read specifie*/
	/*content of input file , specified by (input) number of letters*/
	tempmemory = malloc(sizeof(char) * letters);
	if (tempmemory == NULL) /*if malloc failed or not*/
		return (0);
	/*read contents of file refernced by fd_open->file descriptor from*/
	/*open (), but only content till a given number of letters, then save*/
	/*content to tempmemory using read() which will return number of */
	/* bytes it could read then we store no. of bytes to read_bytes*/
	read_bytes = read(fd_open, tempmemory, letters);
	if (read_bytes == 0) /*failed to read*/
	{
		free(tempmemory);
		close(fd_open);
		return (0);
	}
	/*write to standard output from tempmemory */
	/* and return no. of bytes_written*/
	bytes_written_counter = write(STDOUT_FILENO, tempmemory, read_bytes);
	if (bytes_written_counter == -1)
	{
		free(tempmemory);
		close(fd_open);
		return (0);
	}
	close(fd_open);
	return (bytes_written_counter);
}
