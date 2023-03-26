#include "main.h"

/**
 * print_c - prints character
 * @args: character argument
 * Return: number of characters
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}
/**
 * print_s - prints a string
 * @args: string  argument
 * Return: number of characters
 */
int print_s(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
/**
 * print_percent - pass the percent sing
 * @args: string  argument
 * Return: return the percent sing
 *
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}

/**
 * print_d - prints a decimal
 * @args: decimal argument
 * Return: counter
 */
int print_d(va_list args)
{

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			absolute = (n * -1);
			count += _putchar('-');
		}
		else
			absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_i(va_list args)
{
	return (print_d(args));
}

/**
 * print_binary - print binary.
 * @arg - argument.
 *
 * Return: numbers of value
 */
int print_binary(va_list arg)
{
	unsigned int i, j, n, count = 0;
	unsigned int arr[100];

	n = va_arg(arg, int);

	if (n < 1)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		for (i = 0; n > 0; i++)
		{
			arr[i] = n % 2;
			n /= 2;
		}
		arr[i] = n % 2;
		for (j = i - 1; j > 0; j--)
		{
			_putchar(arr[j] + 48);
			count++;
		}
		count++;
		_putchar(arr[j] + 48);
	}
	return (count);
}
