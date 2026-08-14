//program to first check whether the PIN is correct. If correct, check whether sufficient balance exists.
#include<stdio.h>
int main()
{
    int pin;
    float balance,withdrawal_amount;

    printf("Enter your PIN : ");
    scanf("%d",&pin);

    printf("Enter your account balance : ");
    scanf("%f",&balance);

    printf("Enter withdrawal amount : ");
    scanf("%f",&withdrawal_amount);

    if(pin==1234)
    {
        printf("PIN is correct\n");
        if(balance>=withdrawal_amount)
        {
            printf("Sufficient balance exists. You can withdraw %.2f",withdrawal_amount);
        }
        else
        {
            printf("Insufficient balance. You cannot withdraw %.2f",withdrawal_amount);
        }
    }

}