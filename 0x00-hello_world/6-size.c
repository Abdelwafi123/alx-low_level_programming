#include<stdio.h>
/**
 * main - print out sizes of data types in C
 * code by me
 * Return: 0
*/
int main(void)
{
	char a;
	int e;
	long int b;
	long long int c;
	float d;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(d));
	return (0);
}

