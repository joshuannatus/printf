#include "main.h"

/**
 * base_len - calculates the length for an octal number
 * @num: number for which the length is being calculated
 * @base: base to be calculated by
 * Return: integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
        unsigned int i;

        for (i = 0; num > 0; i++)
        {
                num = num / base;
        }
        return (i);
}

/**
 * rev_string - reverses a string in place
 * @s: string to reverse
 * Return: a pointer to a character
 */
char *rev_string(char *s)
{
	int len, head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * _memcpy - copy memory area
 * @dest: destination for copying
 * @src: source to copy from
 * @n: number of bytes to copy
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
