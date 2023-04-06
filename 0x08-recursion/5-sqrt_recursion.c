#include "main.h"
/**
* _sqrt_recursion - get square root
* @n: input number.
* @rando: random num to check
* Return: square root, else -1.
*/
int help_sqrt(int n, int rando);

int _sqrt_recursion(int n)
{
int rando;
if (n == 1)
{
return  (1);
}
if (n < 1)
{
return (-1);
}
rando = 1;
return (help_sqrt(n, rando));
}
/**
 * help_sqrt - helper function
 * @n: input number
 * @rando: random number to check
 * Return: square root, else -1.
 */
int help_sqrt(int n, int rando)
{
int y = 0;

y = n / rando;
if (rando > n / 2)
{
/* not a prime number*/
/*then return of the recursion = 0*/
return (-1);
}
if (y == rando && n % rando == 0)
{
return (rando);
}
else
{
rando++;
}
return (help_sqrt(n, rando));
}
