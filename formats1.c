#include "main.h"

/**
 * prints_char - prints a character
 * @arg_u: character to be printed (variadic paramet
 * Return: character
 */
int prints_char(va_list arg_u)
{
	int total_num = 0;
	char character;

	character = (char)va_arg(arg_u, int);

	/* prints a character if c exist */
	if (character)
	{
		total_num = _pchar(character);
	}
	return (total_num);
}


/**
 * prints_str - print string
 * @arg_u: variadic parameter
 * Return: printed characters
 */
int prints_str(va_list arg_u)
{
	int i = 0;
	int total_num = 0;
	char *str = va_arg(arg_u, char *);

	/* Terminate if null is present in string*/
	if (str == NULL)
	{
		return (-1);
	}

	/* Prints each character of a string by loop */
	while (str[i])
	{
		total_num = _pchar(str[i]);
		i++;
	}

	return (total_num);
}


/**
 * prints_percent - prints percentage symbol
 * @arg_u: unused viariadic parameter
 * Return: character printed
 */
int prints_percent(__attribute__((unused))va_list arg_u)
{
	int total_num = 0;
	char percent = '%';

	total_num = _pchar(percent);

	return (total_num);
}
