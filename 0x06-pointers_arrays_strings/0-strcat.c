#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest;
*/

char *_strcat(char *dest, char *src)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;

	for (i = 0; src[i] ; i++)
		dest[c++] = src[i];

	return (dest);
}
