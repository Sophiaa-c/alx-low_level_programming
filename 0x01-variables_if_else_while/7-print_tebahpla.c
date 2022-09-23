#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Description:main- The main entry point
 * initialization point
 * rest of the code goes in here
 *Return: Always return 0 (success)
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
