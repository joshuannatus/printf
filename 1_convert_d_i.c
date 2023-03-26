#include "main.h"

/**
 * _printf - Prints a formatted string to the standard output.
 * @format: A pointer to the format string to be printed.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int arg, len = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'd' || *format == 'i')
			{
				arg = va_arg(args, int);
				len += printf("%d", arg);
			}
			else
			{
				putchar('%');
				putchar(*format);
				len += 2;
			}
		}
		else
		{
			putchar(*format);
			len++;
		}

		format++;
	}

	va_end(args);

	return (len);
}
