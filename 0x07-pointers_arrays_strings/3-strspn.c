#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string to search from
 * @accept: string to search
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, jtr;

	for (itr = 0; s[] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != s[itr]; jtr++)
		{
			if (accept[jtr] == '\0')
				return (itr);
		}
	}
	return (itr);
