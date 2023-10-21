#include "main.h"

/**
 * _strncat - Combines two strings
 * @dest: The string to be appended upon
 * @src: The string to be copie to dest
 * @n: Number of bytes from src to be appended to dest
 * Return: Pointer to resulting dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
