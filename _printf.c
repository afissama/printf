#include "main.h"
/**
 * _printf - print given char* to stdout
 *
 * @out: given char* a mix of format plus str
 * @...: the corresponding value of given formats
 * Return: int the number of printed character
 */
int _printf(const char *out, ...)
{
	int nb, i, tmp_n;
	va_list ptr;

	if (out == NULL)
		return (-1);

	nb = 0, i = 0;
	va_start(ptr, out);
	while (out[i] != '\0')
	{
		tmp_n = 0;
		if (out[i] == '%')
		{
			if (out[i + 1] != '\0')
			{
				tmp_n = check_frmt(out[i + 1], ptr);
				if (tmp_n != -1)
				{
					i = i + 2;
					nb += tmp_n;
					continue;
				}
			}
			i++;
		}
		if (out[i] != '\0')
			nb += _printc(out[i]);
		i++;
	}
	va_end(ptr);
	return (nb);
}

/**
 * check_frmt - write to output using specific format
 *
 * @c: char
 * @ptr: va_list
 * Return: the number of written character
 */
int check_frmt(char c, va_list ptr)
{
	va_list ptr_cp;

	switch (c)
	{
		case 'c':
			return (_printc(va_arg(ptr, int)));
		case 's':
			va_copy(ptr_cp, ptr);
			if ((void *)va_arg(ptr_cp, char *) == NULL)
			{
				va_arg(ptr, char *);
				return (_prints("(null)"));
			}
			return (_prints(va_arg(ptr, char*)));
		case '%':
			return (_printc('%'));
		case 'i':
		case 'd':
			return (_printi(va_arg(ptr, int)));
		case 'b':
			return (_printb(va_arg(ptr, unsigned int)));
		default:
			return (-1);
	}
}
