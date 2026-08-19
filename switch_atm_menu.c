// program to display check balance,deposit,withdraw,exit.//
#include<stdio.h>
int main()
{
    int choice;
    float balance = 1000.0, amount;

    printf("===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Your balance is: Rs. %f\n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Amount deposited successfully. New balance: Rs. %.2f\n", balance);
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if(amount <= balance)
            {
                balance -= amount;
                printf("Amount withdrawn successfully. New balance: Rs. %.2f\n", balance);
            }
            else
            {
                printf("Insufficient balance.\n");
            }
            break;
        case 4:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
}