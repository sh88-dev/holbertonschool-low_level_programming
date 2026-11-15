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
        double n1, n2, result;

        while (runmath == 1)
        {
                printf("Simple Calculator\n");
                printf("1) Add\n");
                printf("2) Subtract\n");
                printf("3) Multiply\n");
                printf ("4) Divide\n");
                printf("0) Quit\n");
                printf("Choice: ");
                scanf("%d", &option);

                if (option == 0)
                {
                        runmath = 0;
                        printf("\nBye!\n");
                }

                else if (option < 0 || option > 4)
                {
			printf("Invalid choice: \n");
			scanf("%d", &option);
                }

                else
                {
                        printf("A: ");
                        scanf("%lf", &n1);
                        printf("B: ");
                        scanf("%lf", &n2);
                }

                if (option == 4 && n2 == 0)
                {
                        printf("Error: division by zero\n");
                }

                else switch(option)
		     {
		     case 1:
			     result = (n1 + n2);
			     break;

		     case 2:
			     result = (n1 - n2);
			     break;

		     case 3:
			     result = (n1 * n2);
			     break;

		     case 4:
			     result = (n1 / n2);
			     break;

			     printf("Result: %g\n", result);
		     }
        }
        return (0);
}
