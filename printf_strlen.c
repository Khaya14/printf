#include "main.h"

/**
 * _strlen - returns length of string.
 *
 * @str: the string pointer.
 *
 * Return: i
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlencon - strlen function but for the cpnstant char pointer str
 *
 * @str: the character pointer
 *
 * Return: i
 */

int _strlencon(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
