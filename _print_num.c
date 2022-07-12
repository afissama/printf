#include "main.h"
/**
 * _printi - print given number
 * @n: int number to print
 * Return: number of digits
 */
int _printi(long n)
{
	int nb_digit = 0;
	int digits;
	long temp = n;
	int t_temp = 0;
	int nb = 0;

	digits = 0;
	if (temp == 0)
	{
		nb_digit = 1;
	}
	t_temp = temp;

	while (t_temp != 0)
	{
		t_temp = t_temp / 10;
		nb_digit++;
	}
	t_temp = temp;
	digits += nb_digit;
	if (n < 0)
	{
		_printc('-');
		digits += 1;
	}


	while (nb_digit > 0)
	{
		nb = _abs(t_temp / _pow(10, nb_digit - 1));
		t_temp = _abs(t_temp) - nb * (_pow(10, nb_digit - 1));
		nb_digit--;
		_printc('0' + nb);
	}

	return (digits);
}

/**
 * _pow - return n power p
 * @n: string passing pointer
 * @p: string passing pointer
 *
 * Return: integer
 */
int _pow(int n, int p)
{
	int _p = p;
	int result = 1;

	while (_p != 0)
	{
		result *= n;
		--_p;
	}

	return (result);
}


/**
 * _abs - print number sign
 * @n: The number to check
 *
 * Return: abs of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
