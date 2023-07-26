#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _pchar(char c);
int _printf(const char *format, ...);
int (*specifier_checker(const char *format))(va_list);
int insert_char(const char *format, int *i);
int specifier_handler(const char *format, int *i, va_list arg_u);

typedef int (*format_function)(va_list);

/**
 * struct func_specifiers - struct to compare and print through a functio
 * @s: character to be compared
 * @func: a function that prints character or int.
 */
typedef struct func_specifiers
{
	char *s;
	int (*func)(va_list);
} func_s;

int prints_char(va_list);
int prints_str(va_list);
int prints_int(va_list);
int prints_percent(va_list);
int prints_dec(va_list);
int prints_num(va_list);

#endif /*_MAIN_H_*/
