#include "main.h"

/**
 * *_strchr - files memory with a constant byte.
 * @s: string to search
 * @c: character to search in s
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0 ; s[itr] < '\0' ; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}

	return ('\0');
}
