#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers to 100, replacing multiples of 3 with "Fizz",
 * multiples of 5 with "Buzz", and multiples of both 3 and 5 with "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e;

	for (e = 1; e <= 100; e++)
	{
		if (e % 3 == 0 && e % 5 == 0)
			printf("FizzBuzz");
		else if (e % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", e);

		if (e < 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
