#include "main.h"

/**
 * printf_s - prints a string
 *
 * @val: the argument
 *
 * Return: length of string.
 */

int printf_s(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
