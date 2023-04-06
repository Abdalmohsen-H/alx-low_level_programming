#include "main.h"
/**
* _puts_recursion - simulate puts
* prints a string
* @s: input string
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
s++;
}
if (*s != '\0')
{
_puts_recursion(s);
}
else if (*s == '\0')
{
_putchar('\n');
}
}
