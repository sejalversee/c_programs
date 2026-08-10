#include<stdio.h>

int main()
{
    int num1,num2,rem;

    printf("Enter number to divide : ");
    scanf("%d",&num1);

    printf("Enter number to divide %d : ",num1);
    scanf("%d",&num2);

    rem=num1%num2;

    printf("Remainder is %d",rem);
}