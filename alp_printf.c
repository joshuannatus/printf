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


/**
 * print_S - Non printable characters
 * (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code
 * value in hexadecimal (upper case - always 2 characters)
 * @u: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_S(va_list u, flags_t *f)
{
	int m, count = 0;
	char *ops;
	char *s = va_arg(u, char *);

	(void)f;
	if (!s)
		return (_puts("(null)"));

	for (m = 0; s[m]; m++)
	{
		if (s[m] > 0 && (s[m] < 32 || s[m] >= 127))
		{
			_puts("\\x");
			count += 2;
			ops = convert(s[m], 16, 0);
			if (!ops[1])
				count += _putchar('0');
			count += _puts(ops);
		}
		else
			count += _putchar(s[m]);
	}
	return (count);
}
