#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest;
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int count = 0;
	int p = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}

	for (i = 0; src[i] = '\0'; i++)
	{
		p++;
	}

	for (i = 0; i <= p; i++)
	{
		dest[count + i] = src[i];
	}
	return (dest);
}
