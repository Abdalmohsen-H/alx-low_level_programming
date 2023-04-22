#include <stdio.h>
/**
* main - prints the opcodes of its own main function
*only one single input is accepted
* @argc: argument count
* @argv: argument vector (array of args values)
*
* Return: 0 if success, 1 if invalid number of arguments
*   or 2 if input is negative
*/
int main(int argc, char **argv)
{
int bytes, index
char *opcodes;

/*check if valid number of arguments*/
if (argc != 2)
{
printf("Error\n");
return (1);
}
/*convert argument to int*/
bytes_format = atoi(argv[1]);
/*check for negative number*/
if (bytes_format < 0)
{
printf("Error\n");
return (2);
}
/*cast main function to a char pointer */
/* pointer function */
opcodes = (char *) main;
/* loop opcodes then print in hexadecimal*/
for (index = 0; index < bytes_format ; index++)
{
/* %hhx : printing chars in hexadecimal*/
printf("%02hhx ", opcodes[index]);
}
printf("\n");
return (0);
}
