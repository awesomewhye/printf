#include "main.h"

/**
 * prints_num - prints integer or decimal
 * @arg_u: a variadic parameter
 * Return: an interget of num printed
 */
int prints_num(va_list arg_u)
{
	int unknown_variable;
	unsigned int number;
	int total_num = 0;
	int counts = 1;

	unknown_variable = va_arg(arg_u, int);

	if (unknown_variable < 0)
	{
		total_num = _pchar('-');
		number = unknown_variable * -1;
	}
	else
	{
		number = unknown_variable;
	}

	while (number / counts > 9)
	{
		counts *= 10;
	}

	while (number != 0)
	{
		total_num = _pchar('0' + number / counts);
		number = number % counts;
		counts = counts /  10;
	}

	return (total_num);
}
