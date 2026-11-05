#include <stdio.h>

/**
 * print_item - prints Fizz, Buzz, FizzBuzz or the number itself
 *@n: the number to check
 */
void print_item(int n)
{
	if (n % 15 == 0)
		printf("FizzBuzz");
	else if (n % 3 == 0)
		printf("Fizz");
	else if (n % 5 == 0)
		printf("Buzz");
	else
		printf("%d", n);
}

/**
 * main - prionts 1 to 100 with Fizz, Buzz and FizzBuzz, then a new line
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i > 1)
			printf(" ");
		print_item(i);
		i++;
	}
	printf("\n");
	return (0);
}
