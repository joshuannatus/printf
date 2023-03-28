#include "main.h"

/**
 * get_print - function.
 * @s: character that holds the conversion specifier
 * func_arr[] : array.
 * Return: a pointer to the matching printing function
 */

int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'%', print_percent},
		{'S', print_S},
		{'p', print_p},
		{'R', print_rot},
	};
	int flags = 13;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
