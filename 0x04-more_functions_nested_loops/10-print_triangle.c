#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int a, tri;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (tri = size - a; tri > 0; tri==)

				_putchar(' ');

			for (tri = 0; tri < a; tri++)
				_putchar('#');

			if (a == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
