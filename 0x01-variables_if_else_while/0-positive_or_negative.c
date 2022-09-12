#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Description:main - The main entry point
 *
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is a negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is a 0\n", n);
	}
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}





