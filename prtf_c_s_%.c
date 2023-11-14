#include "main.h"

/**
 * prt_c - function that prints a character.
 * @val: arguments.
 *
 * Return: integer.
 */

int prt_c(char  val)
{
	return (_putchar(val)); 
}

#include "main.h"

/**
 * prt_str - returns length of string.
 *
 * @str: the string pointer.
 *
 * Return: a
 */

int prt_str(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
			;
	return (a); 
}

/**
 * prt_strcon - strlen function but for the constant char pointer str
 *
 * @str: the character pointer
 *
 * Return: a
 */

int prt_strcon(const char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
			;
	return (a); 
}


#include "main.h"

/**
 * prt_per - function that prints out %
 *
 * Return: an integer
 */

int prt_per(void)
{
	_putchar(37);
	return (1); 
}
