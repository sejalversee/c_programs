// Program to check if a number is even or odd//
#include<stdio.h>
int main()
{
     int num;

     printf("Enter number to check : ");
     scanf("%d",&num);

     if(num%2==0)
     {
        printf("%d is even",num);
     }
     else
     {
        printf("%d is odd",num);
     }
}