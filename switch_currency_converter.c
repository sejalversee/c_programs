//program to display a menu for converting INR into diffrent currencies//
#include<stdio.h>
int main()
{
    int choice;
    float inr, converted_amount;

    printf("Menu:\n");
    printf("1. USD\n");
    printf("2. EUR\n");
    printf("3. GBP\n");
    printf("4. JPY\n");
    printf("5. Exit\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 4)
    {
        printf("Enter amount in INR: ");
        scanf("%f", &inr);
    }

    switch(choice)
    {
        case 1:
            converted_amount = inr * 0.013; // Example conversion rate
            printf("Amount in USD: %f\n", converted_amount);
            break;
        case 2:
            converted_amount = inr * 0.011; // Example conversion rate
            printf("Amount in EUR: %f\n", converted_amount);
            break;
        case 3:
            converted_amount = inr * 0.0095; // Example conversion rate
            printf("Amount in GBP: %f\n", converted_amount);
            break;
        case 4:
            converted_amount = inr * 1.45; // Example conversion rate
            printf("Amount in JPY: %f\n", converted_amount);
            break;
        case 5:
            printf("Exiting the program\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
























































































































































