#include <stdio.h>

/**
 * swap_int - A function that swaps the values of two intergers
 * @a: The first interger to be swapped
 * @b: The second interger to be swapped
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
