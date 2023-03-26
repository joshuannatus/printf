#include "main.h"

/**
 * print_binary - print binary number.
 * @pp: arguments.
 *
 * Return: int
 */
int print_binary(va_list pp)
{
	int opp = 0;
	int count = 0;
	int m, n, p = 1;
	unsigned int dig = va_arg(pp, unsigned int);
	unsigned int u;

	for (m = 0; m < 32; m++)
	{
		u = ((p << (31 - m)) & dig);
		if (u >> (31 - m))
			opp = 1;
		if (opp)
		{
			n = u >> (31 - m);
			_putchar(n + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
