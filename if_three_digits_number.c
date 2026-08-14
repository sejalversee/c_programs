//print if it is 3 digit number//
#include<stdio.h>
int main()
{
     int num;   

     printf("Enter number to check : ");
     scanf("%d",&num);      

        if(num>=100 && num<=999)
        {
            printf("%d is 3 digit number",num);
        }

    }
    