#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n, n1;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n1 =n % 10;

	if (n1 > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, n1);

	
