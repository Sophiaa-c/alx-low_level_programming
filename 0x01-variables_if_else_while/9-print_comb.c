#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Description:main- The main entry point
 *
 *
 * Return: Always return 0 (sucess)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
