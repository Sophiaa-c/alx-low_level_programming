#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * Description:main - The entry point function
 *initialization:the declaration part
 * Conditional statements : the if_else part
 * Return: always return 0 (success)
 */

int main(void)
{

	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
