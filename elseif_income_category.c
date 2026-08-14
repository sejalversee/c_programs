//program to check income category based on input income//
#include<stdio.h>
int main()
{
    float income;

    printf("Enter income to check : ");
    scanf("%f",&income);

    if(income<10000)
    {
       printf("Income category is low");
    }
    else if(income>=10000 && income<50000)
    {
       printf("Income category is middle");
    }
    else if(income>=50000 && income<100000)
    {
       printf("Income category is high");
    }
    else
    {
       printf("Income category is very high");
    }
    
}