//program to build calculator using do while//
#include <stdio.h>

int main()
{
    int choice;
    int num1, num2;

    do
    {
        printf("\n\n--- Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d%d", &num1, &num2);

                printf("Result = %d", num1 + num2);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d%d", &num1, &num2);

                printf("Result = %d", num1 - num2);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%d%d", &num1, &num2);

                printf("Result = %d", num1 * num2);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d%d", &num1, &num2);

                if(num2 != 0)
                {
                    printf("Result = %d", num1 / num2);
                }
                else
                {
                    printf("Cannot divide by zero");
                }

                break;

            case 5:
                printf("Exiting calculator...");
                break;

            default:
                printf("Invalid choice");
        }

    }
    while(choice != 5);

    return 0;
}