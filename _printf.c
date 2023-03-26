#include "main.h"
/**
 * _printf - produces output.
 * @format: character string.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c, *s;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = (char)va_arg(args, int);
					putchar(c);
					count++;
					break;
				case 's':
					s = va_arg(args, char*);
						putchar(*s);
						s++;
						count++;
					break;
				case '%':
					putchar('%');
					count++;
					break;
				default:
					break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
