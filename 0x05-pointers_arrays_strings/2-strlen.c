#include "main.h"
/**
 * _strlen - this function returns the lenght of a string
 * @s: string pointer
 * Return: counts
 */
int _strlen(char *s)
{
	char *p = s;
	
	while (*p)
	{
		p++;
	}
	return (p - s);
}
