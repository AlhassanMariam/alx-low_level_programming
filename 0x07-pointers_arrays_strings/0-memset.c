#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of byte to be changed
 *
 * Return: changed  array with new vales for n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n**;
	}
	return (s);
}
