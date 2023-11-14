#include "main.h"

/**
* format_declarator - function that chooses the argument to print
* based on the format declarator.
*
* @format_dec: character after special character '%'.
* @list: argument pointer
*
* Return: number of characters printed in code.
*/

int format_declarator(char format_dec, va_list list)
{
	int val = 0;
	switch (format_dec)
	{
		case 'c':
			val += prt_c(va_arg(list, int));
			break;
		case 's':
			val += prt_strg(va_arg(list, char*));
			break;
		case '%':
			val += _putchar('%');
			break;
		case 'd': case 'i':
			val += prt_int((va_arg(list, int)));
			break;
		case 'x':
			val += hexa_int(va_arg(list, unsigned int), 0);
			break;
		case 'X':
			val += hexa_int(va_arg(list, unsigned int), 1);
			break;
		case 'u':
			val += print_long_int(va_arg(list, unsigned int));
			break;
		case 'o':
			val += octal_int(va_arg(list, unsigned int));
			break;
		case 'b':
			val += binary_num(va_arg(list, unsigned int));
			break;
		default:
			val += _putchar('%');
			val += _putchar(format_dec);
			break;
	}
	return (val);
}
