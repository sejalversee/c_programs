//program to check whether the number is divisible by 3 and 5//
#include<stdio.h>
int main()
{
    int num;


    printf("Enter number to check : ");
    scanf("%d",&num);

    if(num%3==0 && num%5==0)
    {
       printf("%d is divisible by 3 and 5",num);
    }
}