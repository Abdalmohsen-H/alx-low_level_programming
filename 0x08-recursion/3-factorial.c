#include "main.h"
/**
* factorial - Calculate factorian
* of number (n)
* @n: input number type int.
* Return: factorial of n.
*/
int factorial(int n)
{
int facto = 1;
if (n > 0)
{
facto *= factorial(n - 1);
return (facto *n);
}
else if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (1);
}
