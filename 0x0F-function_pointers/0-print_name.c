#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: input person name
 * @f: function pointer prints a name
 */
void print_name(char *name, void (*f)(char *))
{
if (name)
{
f(name);
}
}
