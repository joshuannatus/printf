#include "main.h"
/**
 * print_rot13 - prints a string using rot13
 * @l: list of arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rot(va_list u, flags_t *f)
{
	int a, b;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(u, char *);

	(void)f;
	for (b = 0; s[b]; b++)
	{
		if (s[b] < 'A' || (s[b] > 'Z' && s[b] < 'a') || s[b] > 'z')
			_putchar(s[b]);
		else
		{
			for (a = 0; a <= 52; a++)
			{
				if (s[b] == alpha[a])
					_putchar(rot13[a]);
			}
		}
	}

	return (b);
}

/**
 * print_r - prints a string in reverse
 * @u: argument from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_r(va_list u, flags_t *f)
{
	int a = 0, b;
	char *s = va_arg(u, char *);

	(void)f;
	if (!s)
		s = "(null)";

	while (s[a])
		a++;

	for (b = a - 1; b >= 0; b--)
		_putchar(s[b]);

	return (a);
}

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}
