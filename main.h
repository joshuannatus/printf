#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct specifier - struct specifier
 * @valid: the valid character.
 * @f: the functions associated.
 *
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;


int _printf(const char *format, ...);
int (*get_func(char x))(va_list args);
int _putchar(char c);
int _puts(char *str);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_hexa_lower(va_list ap);
int printbinary(va_list args);
char *rev_string(char *s);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
#endif
