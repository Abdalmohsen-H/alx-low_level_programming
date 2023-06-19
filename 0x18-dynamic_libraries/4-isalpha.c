#include "main.h"
/**
 * _isalpha - checks IF IT'S an alphabet or no a-z, A-Z
 * @c: is int
 * Return: 1 if c is alphbet , 0 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
