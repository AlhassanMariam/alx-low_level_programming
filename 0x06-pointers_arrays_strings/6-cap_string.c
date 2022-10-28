#include "main.h"

/**
 * cap_string - capitalizes all word of a string
 * @s: string
 * Return: to string
 */
char *cap_string(char *s)
{
	int x, y;

	char seprator[] = " \t\n,;.!?\"(){}";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; seprator[y] != '\0'; y++)
		{
		if (x == 0 || s[x - 1] == seprator[y])
		{
			if (s[x] > 97 && s[x] < 123)
				s[x] -= 32;
		}
		}
	}

	return (s);
}
