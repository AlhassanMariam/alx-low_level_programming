#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int num = 0;

	while (*(src + num) != '\0')
	{
		*(dest + num) = *(src + num);
		num++;
	}

	*(dest + num) = '\0';
	return (dest);
}
