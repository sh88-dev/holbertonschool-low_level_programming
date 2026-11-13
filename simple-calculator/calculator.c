#include <stdio.h>

/**
 *
 *main - entry point
 *
 **/
int main(void)
{
	int option = 0;
	int runmath = 1;

	while (runmath == 1)
	{
		printf("\n1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf ("4) Divide\n");
		printf("0) Quit\n");
		printf("\nChoice: \n");
		scanf("%d", &option);

		if (option == 0)
		{
			runmath = 0;
			printf("\nBye!\n");
		}

		else if (option < 0 || option > 4)
		{
			printf("\nOops!...");
			printf("Invalid choice\n");
			printf("\nChoose again: \n");
			scanf("%d", &option);
		}

	}
	return (0);
}
