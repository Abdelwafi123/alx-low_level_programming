#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 * should be printed
*/

void print_diagonal(int n)
{
	int post, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (post = 1; post <= n; post++)
		{
			for (space = 1; space <= (post - 1); space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
