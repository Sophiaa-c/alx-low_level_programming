#include "main.h"
/**
 * print_rev - This function prints a string of text in the reverse order
 * @s: the param (string) to be printed)
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
