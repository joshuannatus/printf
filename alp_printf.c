#include "main.h"
/**
 * print_percent - prints a percent
 * @u: arguments
 * @f: pointer.
 *
 * Return: number of char printed
 */

int print_percent(va_list u, flags_t *f)
{
	(void)u;
	(void)f;
	return (_putchar('%'));
}
/**
 * print_string - strings.
 * @u: argument.
 * @f: pointer.
 *
 * Return: number of char printed
 */

int print_string(va_list u, flags_t *f)
{
	char *s = va_arg(u, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @u: argument.
 * @f: pointer.
 *
 * Return: number of char printed
 */

int print_char(va_list u, flags_t *f)
{
	(void)f;
	_putchar(va_arg(u, int));
	return (1);
}
