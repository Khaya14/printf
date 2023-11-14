#include "main.h"
/**
 * prt_string - function that prints a string.
 * @str: argument for string function.
 * Return: the length of the string.
 */

int prt_string(va_list str)
{
	char *n;
	int m, length;

	n = va_arg(str, char *);
	if (n == NULL)
	{
		n = "(null)";
		length = prt_str(n);
		for (m = 0; m < length; m++)
			_putchar(n[m]);
		return (length);
	}
	else
	{
		length = prt_str(n);
		for (m = 0; m < length; m++)
			_putchar(n[m]);
		return (length);
	}
}
