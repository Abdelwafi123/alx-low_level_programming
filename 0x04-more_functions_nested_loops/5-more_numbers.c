include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 * can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i, p;

	for (i = 0; i <= 9; i++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p >= 10)
				_putchar((p / 10) + 48);
			_putchar((p % 10) + 48);
		}
		_putchar('\n');
	}
}
