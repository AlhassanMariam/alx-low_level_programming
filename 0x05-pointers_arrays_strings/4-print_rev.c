#include "main.h"
/**
 * print_rev - print a string in reverse followed by a new line
 * @s: string to print
 */
void print_rev(char *s)
{
	int i, m;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i = i - 1; i >= 0; i--)
	{
		m = (int) s[i];
		_putchar(m);
	}
	_putchar(10);
}

