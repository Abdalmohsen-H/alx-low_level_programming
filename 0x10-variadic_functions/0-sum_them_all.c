#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - returns sum of all inputs (args)
* @n: count of args
* Return: integer sum of all inputs
*/
int sum_them_all(const unsigned int n, ...)
{
va_list getargs;
int sum = 0;
int counter = n;

/* if n==0 return 0*/
if (!n)
{
return (0);
}
/* intialiaze getargs list*/
va_start(getargs, n);
for (; counter > 0; counter--)
{
/* va_arg(argument_list, arg_type) */
sum += va_arg(getargs, int);
}
/* free getargs*/
va_end(getargs);
return (sum);
}
