#include "main.h"

/**
* format_declarator - function that chooses the argument to print
* based on the format declarator.
*
* @format_dec: character after special character '%'.
* @ptr: argument pointer
* 
* Return: number of characters printed in code.
*/

int format_declarator(char format_dec, va_list ptr)
{
int val = 0;

switch (format_dec)
{
case 'c':
val += prtf_c(va_arg(ptr, int));
break;
case 's':
val += prtf_st(va_arg(ptr, char*));
break;
case '%':
val += _putchar('%');
break;
case 'd': case 'i':
val += prtf_int((va_arg(ptr, int)));
break;
default:
val += _putchar(format_dec);
break;
}
return (val);
}
