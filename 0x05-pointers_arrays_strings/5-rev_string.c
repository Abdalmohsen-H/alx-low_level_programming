#include "main.h"
/**
 * rev_string - reverse string ( without printing it)
 * @s: integer pointer parameter
 * Return: void
 *
 */
void rev_string(char *s)
{
	int length = 0;
	char tempo;
	int first;
	int last;

	if (*s == '\0')
	{
		return;  /* exit function if s is empty string*/
	}
	/* calculate length of string */
	while (*(s + length) != '\0') 
	{
	length++;
 	}
	/* neglect '\0' as it was added after length*/
	length--;
	last = length;
	for (first = 0; first < last; first++)
	{
		tempo = *(s + first);
		*(s + first) = *(s + last);
		*(s + last) = tempo;
		last--;
	}
}
