#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string to search
 * @c: character to search in s
 * Return: s or Null
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else if
		return (NULL);
}
