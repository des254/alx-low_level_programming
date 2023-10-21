#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to second string
 * Return: Difference between first and last unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
