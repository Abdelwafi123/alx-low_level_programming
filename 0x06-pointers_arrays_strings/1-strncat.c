#include "main.h"

/**
 * _strncat - concatenates two strungs
 * @dest: destination string
 * @src: soyrce string
 * @n: bytes that must concatenates
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int j = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
		j++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
