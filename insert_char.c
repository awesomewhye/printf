#include "main.h"

/**
 * insert_char - prints a characters
 * @format: a character or a string
 * @i: a pointer to an integer
 * Return: printed character
 */
int insert_char(const char *format, int *i)
{
	int counts = 0;

	counts = write(1, &format[*i], 1);
	(*i)++;

	return (counts);
}
