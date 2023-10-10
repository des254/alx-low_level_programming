#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase, then in uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
