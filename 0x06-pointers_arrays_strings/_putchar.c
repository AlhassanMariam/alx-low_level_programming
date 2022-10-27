#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: chararxter to print
 * Return: 1
 */
int _putchar(char C)
{
	return (write(1, &C, 1));
}
