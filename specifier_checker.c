#include "main.h"

/**
 * specifier_checker - checks if the characters is valid
 * to be sent to its appopriate function
 * @format: (char*) specifier
 * Return: pointer to function at success
 */
int (*specifier_checker(const char *format))(va_list)
{
	int j = 0;

	func_s specifiers[4] = {{"c", prints_char},
		{"s", prints_str},
		{"%", prints_percent},
		{NULL, NULL}};

	while (specifiers[j].s != NULL)
	{
		if (*(specifiers[j].s) == *format)
		{
			return (specifiers[j].func);
		}
		j++;
	}

	return (NULL);
}
