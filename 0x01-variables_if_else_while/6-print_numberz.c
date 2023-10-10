#include <stdio.h>
/**
 * main - Print numbers of base 10 using  putchar and no char
 * Return: (0) Success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
