#include "main.h"
/**
 * printf_rot - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int printf_rot(va_list args)
{
	int m, n, counter = 0;
	int o = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (m = 0; s[m]; m++)
	{
		o = 0;
		for (n = 0; alpha[n] && !o; n++)
		{
			if (s[m] == alpha[n])
			{
				_putchar(beta[n]);
				counter++;
				o = 1;
			}
		}
		if (!o)
		{
			_putchar(s[m]);
			counter++;
		}
	}
	return (counter);
}
