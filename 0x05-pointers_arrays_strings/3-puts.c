#include "main.h"
/**
 * _puts - prints a string
 * @str: string to be pointed
 * Return: 0
 */
void _puts(char *str)
{
	int i;
	int s;

	for (i = 0; str[i]; i++)
	{
		s = (int) str[i];
		putchar(s);
	}
	_putchar(10);
}

