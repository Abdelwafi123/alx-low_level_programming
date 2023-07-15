#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, - 9
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
	putchar(digit);
	putchar(' ');
	putchar(',');
	digit++;
	}
	putchar('\n');
	return (0);
}
