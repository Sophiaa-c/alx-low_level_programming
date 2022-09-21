#include "main.h"
/**
 * _puts - this function prints a string of texts followed by a new line
 * @str: the pointer
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
