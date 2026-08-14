//program to check whether a number is positive. If positive, check whether it is greater than 100.
#include<stdio.h>
int main()
{
    int num;

    printf("Enter number to check : ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("%d is positive\n",num);
        if(num>100)
        {
            printf("%d is greater than 100",num);
        }
        else
        {
            printf("%d is less than or equal to 100",num);
        }
    }
}