#include"main.h"

/**
 * print_alphabet_10x - function
 * that will print the alphabet 10times
 *
*/

void print_alphabet_10x(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}