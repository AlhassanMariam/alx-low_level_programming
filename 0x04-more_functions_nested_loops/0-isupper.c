#include "main.h"

/**
 * _isupper - check if a character is in uppercase
 * @c: variable test
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
