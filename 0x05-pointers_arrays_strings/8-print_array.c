#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array of integer
 * @a: array
 * @n: number of values to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
