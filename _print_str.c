#include "main.h"
/**
 * _printc - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printc(char c)
{
	return (write(1, &c, 1));
}

/**
 * _prints - writes the character c to stdout
 * @s: The string to print
 *
 * Return: the length of string.
 */
int _prints(char *s)
{
	int nb;

	nb = 0;
	while (*s != '\0')
	{
		_printc(*s);
		nb++;
		++s;
	}
	return (nb);
}
