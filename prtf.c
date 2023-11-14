#include "main.h"

void prtf_bfr(char bfr[], int *bf_ind);

/**
 * _printf - Printf function
 *
 * @format: format.
 *
 * Return: Prints characters.
 */

int _printf(const char *format, ...)
{
	int i, printed = 0, prtf_char = 0;
	int flags, width, precision, size, bf_ind = 0;
	va_list list;
	char bfr[BUFSIZ];

	if (format == NULL)
		return (-1);

	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			bfr[bf_ind++] = format[i];
			if (bf_ind == BUFSIZ)
				prtf_bfr(bfr, &bf_ind);

			/* write(1, &format[i], 1);*/

			prtf_char++;
		}
		else
		{
			prtf_bfr(bfr, &bf_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_prtf(format, &i, list, bfr,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			prtf_char += printed;
		}
	}

	prtf_bfr(bfr, &bf_ind);

	va_end(list);

	return (prtf_char);
}

/**
 * prtf_bfr - prints contents of the buffer (only if it exists)
 *
 * @bfr: Array of characters.
 *
 * @bf_ind: Index at which to add next char, represents length.
 */

void prtf_bfr(char bfr[], int *bf_ind)
{
	if (*bf_ind > 0)
		fwrite(1, &bfr[0], *bf_ind);

	*bf_ind = 0;
}
