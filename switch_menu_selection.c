//program to display a menu//
#include<stdio.h>
int main()
{
    int choice;

    printf("Menu:\n");
    printf("1. Tea\n");
    printf("2. coffee\n");
    printf("3. juice\n");
    printf("4. water\n");
    printf("5. Exit\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("You selected Tea");
            break;
        case 2:
            printf("You selected coffee");
            break;
        case 3:
            printf("You selected juice");
            break;
        case 4:
            printf("You selected water");
            break;
        case 5:
            printf("Exiting the program");
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}