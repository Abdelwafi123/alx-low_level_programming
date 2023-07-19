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
	unsigned long fib1 = 0, fib2 = 2, sum = 0;

	while (sum < 4000000)
	{
	sum = fib1 + fib2;
	fib1 = fib2;
	fib2 = sum;
	if ((sum % 2) == 0)
		printf("%lu ", sum);
	}
	printf("\n");
	return (0);
}
