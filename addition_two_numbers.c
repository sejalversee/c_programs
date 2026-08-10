#include<stdio.h>

int main()
{
    int num1,num2,sum;

    printf("ENTER 2 NUMBER FOR ADDITION : ");
    scanf("%d%d",&num1,&num2);

    sum = num1+num2;

    printf("Addition of %d and %d is %d",num1,num2,sum);
}