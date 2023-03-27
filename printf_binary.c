#include "main.h"

/**
 * print_hex - prints number in hexadecimal base
 * @u: argument
 * @f: pointer
 *
 * Return: the number of char printed
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
 * print_hex_big - prints number in hexadecimal base
 * @u: va_list arguments.
 * @f: pointer.
 *
 * Return: the number of char printed
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

/**
 * print_octal - prints number in base 8
 * @u: argument.
 * @f: pointer.
 *
 * Return: the number of char.
 */
int print_octal(va_list u, flags_t *f)
{
	unsigned int num = va_arg(u, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
