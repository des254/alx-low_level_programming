#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte
 * @s: destination pointer
 * @b: constant byte
 * @n: bytes
 * Return: 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
