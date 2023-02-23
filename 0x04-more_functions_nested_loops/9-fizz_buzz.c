#include <stdio.h>
/**
 * main - prints numbers from 1 to 100
 * Return: 0
 */

int main(void)
{
	int x;
	char a[] = "Fizz";
	char b[] = "Buzz";
	char ab[] = "FizzBuzz";

	for (x = 1; x <= 100; x++)
	{
		if (x == 100)
			printf("%s ", b);
		else if ((x % 3 == 0) && (x % 5 == 0))
			printf("%s ", ab);
		else if (x % 3 == 0)
			printf("%s ", a);
		else if (x % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", x);
	}
	printf("\n");
	return (0);
}
