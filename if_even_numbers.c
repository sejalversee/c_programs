//print number if it is even/
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
}