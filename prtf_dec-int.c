#include "main.h"

/**
 * print_int - function that prints integers
 * @input: the arguments that will be inputted into the file
 * Return: values to be printed
 */

int print_int(va_list input)
{
	int i = va_arg(input, int);
	int num, val = i % 10, digit, exp = 1;
	int j = 1;

	i = i / 10;
	num = i;

	if (val < 0)
	{
		_putchar('-');
		num = -num;
		i = -i;
		val = -val;
		j++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = i;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(val + '0');
	return (j);
}

#include "main.h"

/**
 * print_dec - function that prints decimals
 * @input: the arguments that will be inputted into the file
 * Return: values to be printed
 */

int print_dec(va_list input)
{
	int i = va_arg(input, int);
	int num, val = i % 10, digit, exp = 1;
	int j = 1;

	i = i / 10;
	num = i;

	if (val < 0)
	{
		_putchar('-');
		num = -num;
		i = -i;
		val = -val;
		j++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = i;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(val + '0');
	return (j);
}
