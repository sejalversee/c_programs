//program to check a number is positive. If positive, check whether it is even.//
#include<stdio.h>
int main()
{
    int num;

    printf("Enter number to check : ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("%d is positive\n",num);
        if(num%2==0)
        {
            printf("%d is even",num);
        }
        else
        {
            printf("%d is odd",num);
        }
    }
}