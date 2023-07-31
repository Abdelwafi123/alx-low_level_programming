#include "main.h"

/**
 * *_strchr - locates character in a string
 * @s: string to search
 * @c: character to search in s
 * Return: s or Null
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == s)
			return (s + itr);
	}

	return ('\0');
}
