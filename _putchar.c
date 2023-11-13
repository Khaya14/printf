#include <unistd.h>

/**
 * _putchar - writes char c to stdout.
 *
 * @c: character that gets printed.
 *
 * Return: On success, 1. 
 * On error, -1 & errno is set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
