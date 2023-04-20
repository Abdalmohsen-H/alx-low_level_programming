#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - prints all inputs (args) of type string
* with a given delimeter (separator)
* @n: count of args
* @separator: deliemeter (separator) on printed output
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list getargs;
int counter;

/* if n==0 return*/
if (!n)
{
printf("\n");
return;
}
/* intialiaze getargs list*/
va_start(getargs, n);
for (counter = n; counter > 1; counter--)
{
if (getargs != '\0')
{printf("%s", va_arg(getargs, char *));
}
else
{printf("(nil)");
}
if (separator)
{
printf("%s", separator);
}
}
printf("%s\n", va_arg(getargs, char *));
/* free getargs*/
va_end(getargs);
}
