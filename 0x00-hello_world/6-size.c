#include <stdio.h>

/**
 * main - Entry point
 * Description/ using to print the size of various types
 * Return: Always 0 'Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %u byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int: %u byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %u byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %u byte(s)\n", (unsigned long) sizeof(d));
printf("size of a float: %u byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
