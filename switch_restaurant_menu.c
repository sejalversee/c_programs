//program to display food items with prices and print the selected item's price.//
#include <stdio.h>

int main()
{
    int choice;

    printf("===== RESTAURANT MENU =====\n");
    printf("1. Pizza      - Rs. 200\n");
    printf("2. Burger     - Rs. 120\n");
    printf("3. Sandwich   - Rs. 100\n");
    printf("4. Pasta      - Rs. 180\n");
    printf("5. Coffee     - Rs. 80\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Pizza - Rs. 200");
            break;

        case 2:
            printf("Burger - Rs. 120");
            break;

        case 3:
            printf("Sandwich - Rs. 100");
            break;

        case 4:
            printf("Pasta - Rs. 180");
            break;

        case 5:
            printf("Coffee - Rs. 80");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}





































