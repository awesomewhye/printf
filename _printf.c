#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a char or string
 * @...: unknown variadic parameter
 * Return: printed strings.
 */
int _printf(const char *format, ...)
{
	int counts;
	int total_num = 0;
	int i = 0;
	va_list arg_u;

	va_start(arg_u, format);

	/* Prevents a NULL pointer from passing */
	if (format == NULL)
		return (-1);

	/* Prints characters of the string one after the other */
	while (format[i])
	{
		if (format[i] != '%')
		{
			total_num += insert_char(format, &i);
		}
		else
		{
			counts = specifier_handler(format, &i, arg_u);
			if (counts == -1)
			{
				va_end(arg_u);
				return -1;
			}
			total_num += counts;
		}
	}

	va_end(arg_u);
	return total_num;
}
