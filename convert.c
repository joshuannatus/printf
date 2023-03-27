#include "main.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @letters: flag if hexa values need to be lowercase
 * Return: result string
 */

char *convert(unsigned long int num, int base, int letters)
{
	static char *per;
	static char buffer[50];
	char *ptr;

	per = (letters)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = per[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
