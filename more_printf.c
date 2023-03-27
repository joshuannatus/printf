#include "main.h"
/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @m: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_prec(const char *format, int *m, va_list list)
{
	int check_m = *m + 1;
	int prec = -1;
	if (format[check_m] != '.')
		return (prec);
	precision = 0;
	for (check_m += 1; format[check_m] != '\0'; check_m++)
	{
		if (is_digit(format[check_m]))
		{
			prec *= 10;
			prec += format[check_m] - '0';
		}
		else if (format[check_m] == '*')
		{
			check_m++;
			prec = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*m = check_m - 1;
	return (prec);
}
