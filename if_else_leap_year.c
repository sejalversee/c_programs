//program to check whether year is leap year or not//
#include<stdio.h>
int main()
{
    int year;

    printf("Enter year to check : ");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0 || year%400==0)
    {
       printf("%d is leap year",year);
    }
    else
    {
       printf("%d is not leap year",year);
    }
}