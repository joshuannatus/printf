#include "main.h"

/**
 * print_int - prints an integer
 * @u:  argument.
 * @f:  pointer argument.
 *
 * Return: number of char printed
 */
int print_int(va_list u, flags_t *f)
{
	int n = va_arg(u, int);
	int res = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
 * print_number - helper funtion.
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * count_digit - returns the number of digits
 * @i: integer to evaluate.
 *
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}

/**
 * print_binary - prints number in base 2
 * @u: arguments.
 * @f: pointer.
 *
 * Return: the number of char.
 */
int print_binary(va_list u, flags_t *f)
{
	unsigned int num = va_arg(u, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}
