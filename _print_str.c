#include <unistd.h>
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
	int nb, i;

	nb = 0, i = 0;
	while (s[i] != '\0')
	{
		_printc(s[i]);
		nb++;
		i++;
	}
	return (nb);
}

/**
 * rev_string - reverse the given string
 * @s: string passing pointer
 *
 */
void rev_string(char *s)
{
	int _size = _strlen(s);
	int i = 0;
	char tmp;

	for (i = 0; i < (_size / 2); i++)
	{
		tmp = s[i];
		s[i] = s[_size - 1 - i];
		s[_size - 1 - i] = tmp;
	}

}

/**
 * _strlen - return the length of parsing param
 * @s: string passing pointer
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

/**
 * _print_sr - return the length of parsing param
 * @s: string passing pointer
 *
 * Return: length of s
 */
int _print_sr(char *s)
{
	rev_string(s);
	return (_prints(s));
}
