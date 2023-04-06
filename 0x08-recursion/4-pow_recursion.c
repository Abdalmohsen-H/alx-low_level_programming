#include "main.h"
/**
* _pow_recursion - Calculate base n raised
* to a power y, AKA (x ^ y).
* @x: input base number.
* @y: input power number.
* Return: x ^ y.
*/
int _pow_recursion(int x, int y)
{
int base = 1;
if (y > 0)
{
base *= _pow_recursion(x, (y - 1));
return (base *x);
}
else if (y < 0)
{
return (-1);
}
/* if y == 0 */
return (1);
}
