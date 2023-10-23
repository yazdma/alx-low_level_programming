#include "main.h"

/**
 * _strstr - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
	        {
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
