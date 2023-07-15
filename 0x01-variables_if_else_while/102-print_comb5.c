#include <stdio.h>

/**
 * main - Entry point
 * Description:  Write a program that prints all possible
 * Return: 0 (Success)
*/
int main(void)
{
	int N1 = 0,  N2;

	while (N1 <= 99)
	{
		N2 = N1;
		while (N2 <= 99)
		{
			if (N1 != N2)
			{
				putchar((N1 / 10) + 48);
				putchar((N1 % 10) + 48);
				putchar(' ');
				putchar((N2 / 10) + 48);
				putchar((N2 % 10) + 48);
				if (N1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			N2++;
		}
		N1++;

	}
	putchar('\n');
	return (0);
}
