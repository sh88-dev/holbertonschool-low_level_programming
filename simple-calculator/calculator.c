#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int choice = 0;

	printf("Simple Calculator\n");
	printf("1) Add\n"
	       "2) Subtract\n"
	       "3) Multiply\n"
	       "4) Divide\n"
	       "0) Quit\n");
	printf("Choice: ");
	scanf("%d", &choice);

	if (choice == 0)
	{
		printf("Bye!\n");
	}

	return (0);
}
