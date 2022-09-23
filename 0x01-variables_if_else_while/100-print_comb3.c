#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Description:main - The main entry point
 *
 *
 *Return: Always return 0 (success)
 */

int main(void)
{
	int x;
	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			if (x != y && x < y)
			{
				putchar(x);
				putchar(y);
				if (y == 57 && x == 56)
				{
					break
						;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
