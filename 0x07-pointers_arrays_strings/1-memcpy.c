#include "main.h"
#include <string.h>

/**
 * _memcpy - copies from source to memory
 * @dest: copy to
 * @src: copy from
 * @n: the amount to copy
 *
 * Return: a pointer to destination @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = memcpy(dest, src, n);

	return (s);
}
