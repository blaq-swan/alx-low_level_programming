#include "main.h"

/**
 * print_diagonal - prints a straight line
 *
 * @n: Line space
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
