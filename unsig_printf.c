#include "main.h"

/**
 * print_unsigned - print an insigned int.
 * @u: argument.
 * @f: pointer.
 *
 * Return: number of char.
 */
int print_unsigned(va_list u, flags_t *f)
{
	unsigned int num = va_arg(u, unsigned int);
	char *str = convert(num, 10, 0);
	int count = 0;

	if (f->plus == 1 && (int)num >= 0)
		count += _putchar('+');
	else if (f->space == 1 && (int)num >= 0)
		count += _putchar(' ');

	count += _puts(str);
	return count;
}

/**
 * print_octal - print number in octal.
 * @u: argument.
 * @f: pointer.
 *
 * Return: number of char.
 */

int print_octal(va_list u, flags_t *f)
{
	unsigned int num = va_arg(u, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');

	count += _puts(str);
	return count;
}

/**
 * print_hex - prints number in hexadecimal base,
 * in lowercase
 * @u: arguments.
 * @f: pointer
 *
 * Return: number of char.
 */
int print_hex(va_list u, flags_t *f)
{
	unsigned int num = va_arg(u, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - prints number in hexadecimal base,
 * in uppercase
 * @u: arguments.
 * @f: number of pointer.
 *
 * Return: char.
 */
int print_hex_big(va_list u, flags_t *f)
{
	unsigned int num = va_arg(u, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}
