#include "main.h"
/**
 * _strlen - get string length
 * @s: integer pointer parameter
 * Return: int length of string
 *
 */
int _strlen(char *s)
{
	int getlen;

	getlen = 0;
	while (*s != '\0')
	{
		getlen++;
		s++;
	}
	return (getlen);
}
