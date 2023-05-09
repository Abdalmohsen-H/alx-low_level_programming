#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - creates a file with special conditions
 * for task 1
 * @filename: input filname and its path
 * @text_content: content to be write on new file or truncated on existing
 * Return: 1 if Success, else -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int bytes_written_counter, strlenght = 0, file_descriptor;

	/*input filname is NULL*/
	if (filename == NULL)
	{return (-1);/*failure*/
	}
	/* Open file with special mode amd sequence specified on task 1 */
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_descriptor == -1) /*check if operation failed*/
	{return (-1);/*failure*/
	}
	if (text_content != NULL)
	{
		strlenght = strlen(text_content);
		/* write text_content into above file description */
		bytes_written_counter = write(file_descriptor, text_content, strlenght);
		if (bytes_written_counter  == -1) /*if write operation failed*/
		{
			close(file_descriptor);
			return (-1);/*failure*/
		}
	}
	close(file_descriptor);
	return (1);/*success*/
}
