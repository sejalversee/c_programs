//print number if it is divisible by 10//
#include<stdio.h>


int main()
{
     int num;


     printf("Enter number to check : ");
     scanf("%d",&num);

     if(num%10==0)
     {
        printf("%d is divisible by 10",num);
     }

}