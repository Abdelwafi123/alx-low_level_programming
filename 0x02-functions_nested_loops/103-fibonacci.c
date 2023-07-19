#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the sum of even-valued
 * Fibonacci sequence not execed 4million
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum = 0;
	float totalsum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			totalsum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", totalsum);
	return (0);
}
