#include "main.h"
/**
 * swap_int - this functions swaps the values of two variables
 * @a: var_1
 * @b: var_2
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
