#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int i, va_list list)
{
	int precision = -1;
	bool minus_flag = false;

	for (int j = i + 1; format[j] != '\0'; j++)
	{
		if (format[j] == '.')
		{
			precision = 0;
			continue;
		}
		if (precision != -1 && format[j] >= '0' && format[j] <= '9')
		{
			precision = precision * 10 + (format[j] - '0');
			continue;
		}
		if (format[j] == '-')
		{
			minus_flag = true;
			continue;
		}
		if (format[j] == 'd' || format[j] == 'i')
		{
			int arg = va_arg(list, int);
			if (precision == -1)
			{
				precision = 1;
			}
			precision += num_digits(arg) - 1;
			if (minus_flag)
			{
				precision += 1;
			}
			break;
		}
	}
	return precision;
}
