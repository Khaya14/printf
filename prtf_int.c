#include "main.h"

/**
 * prtf_int - function that prints integers
 * @types: the list of arguments input
 * @bfr: the buffer array to handle the print
 * @flags: calculates active flags
 * @width: gets the width within printf function
 * @precision: Precision specification
 * @size: the size specificer
 * Return: the number of characters to be printed
 */

int prtf_int(va_list types, char bfr[], int flags,
int width, int precision, int size)
{
	int i = BUFSIZ - 2;
	int is_negative = 0;
	long int n = va_arg(types, long int);
	unsigned long int val;

	n = convert_size_number(n, size);

	if (n == 0)
		bfr[i--] = '\0';

	bfr[BUFSIZ - 1] = '\0';
	val = (unsigned long int)n;

	if (n < 0)
	{
		val = (unsigned long int)((-1) * n);
		is_negative = 1;
	}

	while (val > 0)
	{
		bfr[i--] = (val % 10) + '0';
		val /= 10;
	}

	i++;

	return write_number(is_negative, i, bfr, flags, width, precision, size);
}
