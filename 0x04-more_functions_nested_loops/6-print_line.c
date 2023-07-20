#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the - character
 * should be printed
*/

void print _line(int n)
{
	int p;

	if (p <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; p++)
			putchar('_');
		putchar('\n');
	}
}
