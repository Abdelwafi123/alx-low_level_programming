#include "main.h"

/**
 * main- print numbers 1 - 100 followed by a new line
 * numbers that are multiples of 3 print Fizz
 * numbers that are multiples of 5 print Buzz
 * numbers that are multiples of 3 and 5 print FizzBuzz
 * each number and word to be separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if ((a % 3) == 0)
			printf("Fizz");
		else if ((a % 5) == 0)
			printf("Buzz");
		else
			printf("%d", a);

		if (a != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
