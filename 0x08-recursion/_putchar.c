#include <unistd.h>

/**
 * _putchar - writes input character c to stdout
 * @c: input character to print
 *
 * Return: 1 if success.
 *if error then -1 is returned,
 * and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
