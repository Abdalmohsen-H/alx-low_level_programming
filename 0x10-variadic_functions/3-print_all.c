#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_all - prints all given arguments
* separated by a ", ", based on specified format(types)
*
* @format: a string of characters that specify types
* of given argument in the order they appear
*/
void print_all(const char * const format, ...)
{va_list args;
int i = 0, ignore = 0;
char *s; /*string pointer to hold a string argument*/
char *separator = ", ";

va_start(args, format); /*initialize argument list*/
while (format && format[i]) /*while it's not null and not ended*/
{
switch (format[i]) /*switch based on char from format string*/
{
case 'c': /* if it's a char */
	printf("%c", va_arg(args, int)); /*print next argument as a char*/
	break;/*above line if char passed to ... it become int*/
case 'i': /* if it's an integer */
	printf("%d", va_arg(args, int));
	break;
case 'f': /* if it's a float */
	printf("%f", va_arg(args, double)); /*print next argas a double*/
	break;
case 's': /*if it's a string*/
	s = va_arg(args, char *); /*string pointer variable points to next arg*/
	if (s == NULL) /* if the string is null*/
	{	printf("(nil)"); /*print "(nil)"*/
		break;
	}
	printf("%s", s); /*else, print the string*/
	break;
default: /*if format char not c,i,f or s*/
	ignore = 1;
	break; /*then ignore(do nothing)*/
}
if (format[i + 1] && ignore == 0) /*if there next character on format string*/
printf("%s", separator); /*print separator string*/
i++;
ignore = 0;
}
printf("\n");
va_end(args); /*free (or end) the argument list*/
}
