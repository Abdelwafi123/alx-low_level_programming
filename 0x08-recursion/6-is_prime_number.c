#include "main.h"
#include "main.h"

/**
 * is_prime_number - check if n is a prime number
 * @a: int
 * @n: int
 * Return: 0 or 1
 */

int check_prime(int n, int a);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can devide it
 * @n: int
 * @a: int
 * Return: int
 */

int check_prime(int n, int a)
{
	if (a >= n && n > 1)
		return (1);
	else if (n % a == 0 || n <= 1)
		return (0);
	else
		return (checks_prime(n, a + 1));
}
