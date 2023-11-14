#include "main.h"

/**
 * _prtf - function that printsf
 *
 * @format: format.
 *
 * Return: Prints characters.
 */

int _prtf(const char *format, ...)
{
	int i, printed = 0, 
	int val;
	va_list list;
	

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			val += _putchar(format[i]);
		else
		{
			i++;
			val += format_declarator(format[i], list);
		}
	}

	va_end(list);

	return (val);
}

