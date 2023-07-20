#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the - character
 * should be printed
*/

void print_line(int n)
{
	int p;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; p++)
			_putchar('_');
		_putchar('\n');
	}
}
