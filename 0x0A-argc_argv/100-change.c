#include <stdio.h>
#include <stdlib.h>
/**
 * main - min. number of coins
 * to make change for an amount of money passed
 * in one argument
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 if seuccess, 1 if count of
 * input arguments not equal to one
 */
/* int change_coins(int *argc, char **argv) */
int main(int argc, char *argv[])
{int total_coins = 0, cents;
char *ch;

/* if pased arguments count not one */
if ((argc - 1) != 1) /*or argc != 2*/
{printf("Error\n");
return (1);
}
/* check if input's negative or not a digit*/
for (ch = argv[1];  *ch <= '0' || *ch >= '9';  ch++)
{printf("0\n");/*input not a digit or -ve (start with "-")*/
return (0);
}
cents = atoi(argv[1]);/*argument is a digit then calculate*/
while (cents > 0)
{
if (cents >= 25)
{total_coins += cents / 25;
cents = cents % 25; /* or  cents -= ((cents/25)*25)*/
}
if (cents >= 10)
{total_coins += cents / 10;
cents = cents % 10;
}
if (cents >= 5)
{total_coins += cents / 5;
cents = cents % 5;
}
if (cents >= 2)
{total_coins += cents / 2;
cents = cents % 2;
}
if (cents == 1)
{total_coins += 1;
cents = 0;
}
}
printf("%d\n", total_coins);
return (0);
}
