#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
int _putchar(char c);
#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		bg = c1;
	else
		bg = c2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	c1--, c2--, size_r--;
	dr1 = *(n1 + c1) - 48, dr2 = *(n2 + c2) - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (c1 > 0)
			c1--, dr1 = *(n1 + c1) - 48;
		else
			dr1 = 0;
		if (c2 > 0)
			c2--, dr2 = *(n2 + c2) - 48;
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
#endif
