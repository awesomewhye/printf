#include "main.h"

/**
 * _pchar - prints a character
 * @c: a character
 * Return: character:
 */
int _pchar(char c)
{
	return (write(1, &c, 1));
}
