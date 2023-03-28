#include "main.h"

/**
 * get_flag - flags.
 * @s: character.
 * @f: pointer.
 *
 * Return: 1 if a flag has been turned on, 0 otherwise.
 */

int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
		case '-':
			f ->minus = 1;
			i = 1;
			break;
		case '0':
			f ->zero = 1;
			i = 1;
			break;
	}
	return (i);
}
