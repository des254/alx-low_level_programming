#include <stdio.h>
/**
 * main - A program that prints all base 16 numbers in hexadecimal
 * Return: 0 (Success)
 */
int main(void)
{
	int i = '0';
	char c = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
