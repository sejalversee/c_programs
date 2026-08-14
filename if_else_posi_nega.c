//program to check whether the number is positive or negative//
#include<stdio.h>
int main()
{

    int num;

    printf("Enter number to check : ");
    scanf("%d",&num);

    if(num>0)
    {
       printf("%d is positive",num);
    }
    else
    {
       printf("%d is negative",num);
    }
}