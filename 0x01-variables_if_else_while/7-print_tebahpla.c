#include <stdio.h>
/**
 * main - Print alphabets in reverse order
 *
 * Return: 0
 */
int main(void)
{
	char a;

		for (a = 'z' ; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
