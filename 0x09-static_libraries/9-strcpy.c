#include "main.h"
/**
 * char *_strcpy - program copies the string pointed to be src
 * @dest: copie to
 * @src: copie from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[b] = src[b];

	}
	dest[a] = '\0';
	return (dest);
}
