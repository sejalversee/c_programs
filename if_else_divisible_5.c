//program to check if input number is divisible by 5//
#include<stdio.h>
int main()
{
        int num;

        printf("Enter number to check : ");
        scanf("%d",&num);

        if(num%5==0)
        {
           printf("%d is divisible by 5",num);
        }
    }