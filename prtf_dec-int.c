#include "main.h"

/**
 * prt_int - function that prints integers
 * @input: the arguments that will be inputted into the file
 * Return: values to be printed
 */

int prt_int(va_list input)
{
	int i = va_arg(input, int);
	int n;
	int num, val = n % 10, digit, inpt = 1;
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
			inpt = inpt * 10;
			num = num / 10;
		}
		num = i;
		while (inpt > 0)
		{
			digit = num / inpt;
			_putchar(digit + '0');
			num = num - (digit * inpt);
			inpt = inpt / 10;
			j++;
		}
	}
	_putchar(val + '0');
	return (j);
}

#include "main.h"
/**
 * prt_dec - function that prints decimals
 * @input: the arguments that will be inputted into the file
 * Return: values to be printed
 */

int prt_dec(va_list input)
{
	int i = va_arg(input, int);
	int n;
	int num, val = n % 10, digit, inpt = 1;
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
			inpt = inpt * 10;
			num = num / 10;
		}
		num = i;
		while (inpt > 0)
		{
			digit = num / inpt;
			_putchar(digit + '0');
			num = num - (digit * inpt);
			inpt = inpt / 10;
			j++;
		}
	}
	_putchar(val + '0');
	return (j);
}
