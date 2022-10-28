#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: second number
 * @r: pointer to the buffer
 * @size_r: size of buffer
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, length_1, length_2, units, tens;
	char *tmp_n1, *tmp_n2;

	length_1 = char_len(1), length_2 = char_len(2);

	if (size_r < (length_1 + 1) || size_r < (length_2 + 1))
		return (0);

	tmp_n1 = malloc(sizeof(char) * size_r);
	tmp_n2 = malloc(sizeof(char) * size_r);

	n1 = add_0(n1, tmp_n1, length_1, size_r);
	n2 = add_0(n2, tmp_n2, length_2, size_r);

	tens = 0;
	for (i = 1; i <= size_r; i++)
	{
		units = (n1[size_r - i] - 48) + (n2[size_r - i] - 48) + tens;
		if (units > 9)
		{
			tens = units / 10;
			units %= 10;
		}
		else
			tens = 0;
		r[size_r - 1] = units + 48;
	}
	r[size_r] = '\0';

	r = cut_0(r);
	if (tens > 0 || char_len(r) > size_r - 1)
	{
		free(tmp_n1);
		free(tmp_n2);
		return (0);
	}

	return (r);
}

/**
 * char_len - finds the length of a string
 * @s: string
 * Return: length of s
 */

int char_len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * add_0 - add zeros to the beginning of a string
 * @s: string
 * @dest: pointer to write
 * @s_len: length of s
 * @size: length of string
 * Return: pointer to output
 */

char *add_0(char *s, char *dest, int s_len, int size)
{
	int i, diff;

	diff = size - s_len;
	for (i = 0; i < size; i++)
	{
		if (i < diff)
			dest[i] = 48;
		else
			dest[i] = s[i - diff];
	}

	dest[i] = '\0';

	return (dest);
}
/**
 * cut_0 - remove leading zero from the string
 * @s: to be reduced
 * Return: pointer to s
 */

char *cut_0(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] - 48 !=  0)
		{
			s = s + i;
			break;
		}
	}
	return (s);
}
