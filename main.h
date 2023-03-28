#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct flags - struct containining flags
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct pho - function.
 * @c: format specifier
 * @f: pointer to the correct printing function
 */

typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;


/* _printf */
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flags_t *);

/* functions */
int _putchar(char c);
int _puts(char *str);

/* Print Number and base */
int print_int(va_list u, flags_t *f);
void print_number(int n);
int print_unsigned(va_list u, flags_t *f);
int count_digit(int i);
int print_hex(va_list u, flags_t *f);
int print_hex_big(va_list u, flags_t *f);
int print_binary(va_list u, flags_t *f);
int print_octal(va_list u, flags_t *f);

/* Strings/Character */
int print_string(va_list u, flags_t *f);
int print_char(va_list u, flags_t *f);

/* Print percentage */
int print_percent(va_list u, flags_t *f);

/* convert */
char *convert(unsigned long int num, int base, int letters);
int print_S(va_list u, flags_t *f);
int print_p(va_list u, flags_t *f);
int print_rot(va_list u, flags_t *f);

/* FLAGS */
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);

#define GET_INT_ARG(args, flags) \
    (flags->length == LENGTH_LONG_LONG ? va_arg(args, long long) \
        : flags->length == LENGTH_LONG ? va_arg(args, long) \
        : flags->length == LENGTH_SHORT ? (short)va_arg(args, int) \
        : flags->length == LENGTH_CHAR ? (char)va_arg(args, int) \
        : va_arg(args, int))

#define GET_UNSIGNED_ARG(args, flags) \
    (flags->length == LENGTH_LONG_LONG ? va_arg(args, unsigned long long) \
        : flags->length == LENGTH_LONG ? va_arg(args, unsigned long) \
        : flags->length == LENGTH_SHORT ? (unsigned short)va_arg(args, unsigned int) \
        : flags->length == LENGTH_CHAR ? (unsigned char)va_arg(args, unsigned int) \
        : va_arg(args, unsigned int))







#endif
