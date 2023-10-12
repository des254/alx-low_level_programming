#include "main.h"

/**
 * _abs - Computes absolute value of an interger
 * @c: The number to be computed
 * Return: Absolute value or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int absolute_value;

		absolute_value = c * -1;
		return (absolute_value);
	}
	return (c);
}
