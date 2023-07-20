#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 * from 2 and 4 and  you can
 * only use _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int num = 0;

	while (num <= 0)
	{
		if (num != 2 || num != 4)
			_putchar(num + 48);
		num++;
	}
	_putchar('\n');
}
