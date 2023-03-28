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
