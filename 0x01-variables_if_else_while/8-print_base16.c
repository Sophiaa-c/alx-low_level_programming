#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Description:main- The main entry point
 *
 *Some other comments here
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	int i;
	int k;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (k = 'a'; k <= 'f'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
