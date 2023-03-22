#include <stdio.h>
/**
 * main - Print numbers separated by comma in ascending order
 *
 * Return: (0)
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
