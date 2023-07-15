#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int N1 = 0, N2, N3;

	while (N1 <= 9)
	{
		N2 = 0;
		while (N2 <= 9)
		{
			N3 = 0;
			while (N3 <= 9)
			{
				if (N3 > N2 && N2 > N1 && N3 != N2 && N2 != N1)
				{
					putchar(N1 + 48);
					putchar(N2 + 48);
					putchar(N3 + 48);
					if (N3 + N2 + N1 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				N3++;
			}
			N2++;
		}
		N1++;
	}
	putchar('\n');
	return (0);
}
