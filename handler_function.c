#include "main.h"

/**
 * specifier_handler - handles the specifier checker to thr printf
 * @format: a string or char
 * @i: a pointer to an integer
 * @arg_u: a variadic parameter
 * Return: 0
 */
int specifier_handler(const char *format, int *i, va_list arg_u)
{
	int counts = 0;

	format_function func_ap = specifier_checker(&format[*i + 1]);

	if (func_ap != NULL)
	{
		counts = func_ap(arg_u);
		(*i) += 2;
		return (counts);
	}
	if (format[*i + 1] != '\0')
	{
		counts = write(1, &format[*i + 1], 1);
		(*i) += 2;
		return (counts);
	}
	if (format[*i + 1] == '\0')
	{
		return (-1);
	}
	return (0);
}
