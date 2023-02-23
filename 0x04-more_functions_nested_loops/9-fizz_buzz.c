#include "main.h"
#include <stdio.h>
/**
 * main - prints a Fizz Buzz program
 * Return: 0
 */
int main(void)
{
	int y;

	for (y = 1; y <= 100; y++)
	{
		if ((y % 3 == 0) && (y % 5 == 0))
		{
			printf("Fizzbuzz");
		}
		else if (y % 3 == 0)
		{
			printf("Fizz");
		}
		else if (y % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", y);
		}
		if (y != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
