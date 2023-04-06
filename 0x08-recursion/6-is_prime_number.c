#include "main.h"
/**
* is_prime_number - detect prime numbers
* @n: input number.
* @base: random num to check
* Return: 1 if prime number, else 0.
*/
int check_prime_number(int n, int base);

int is_prime_number(int n)
{
int base;
if (n <= 1)
{
return (0);
}
if (n > 1000)
{
base =  (n / 4);
}
else
{
base = (n / 2);
}
return (check_prime_number(n, base));
}
/**
 * check_prime_number - helper function
 * @base: random number to check
 * @n:input number
 * Return: 1 if prime num ,else 0
 */
int check_prime_number(int n, int base)
{
int x;
x = n % base;

if (x == 0 && base > 1)
{
/* not a prime number*/
/*then return of the recursion = 0*/
return (0);
}
if (base <= 1)
{
/**
* it is a prime num this value (1)
*will be the return of the recursion
*/
return (1);
}
base--;
return (check_prime_number(n, base));
}
