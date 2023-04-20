#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - prints all inputs (args)
* with a given delimeter (separator)
* @n: count of args
* @separator: deliemeter (separator) on printed output
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list getargs;
int counter;

/* if n==0 return*/
if (!n)
{
return;
}
/* intialiaze getargs list*/
va_start(getargs, n);
for (counter = n; counter > 1; counter--)
{
printf("%d", va_arg(getargs, int));
if (separator)
{
printf("%c ",*separator);
}
}
printf("%d\n", va_arg(getargs, int));
/* free getargs*/
va_end(getargs);
}
