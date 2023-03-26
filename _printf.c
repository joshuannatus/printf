#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: character string containing zero or more directives
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					printed += putchar(va_arg(args, int));
					break;
				case 's':
					printed += printf("%s", va_arg(args, char *));
					break;
				case '%':
					printed += putchar('%');
					break;
				default:
					printed += putchar('%');
					printed += putchar(*format);
					break;
			}
		}
		else
		{
			printed += putchar(*format);
		}

		format++;
	}
	va_end(args);
	return (printed);
}

