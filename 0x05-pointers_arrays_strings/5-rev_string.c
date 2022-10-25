#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: string
 * Return: always 0
 */
void rev_string(char *s)
{
	int n = strlen(s);
	int i;
	char tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
	}
}
