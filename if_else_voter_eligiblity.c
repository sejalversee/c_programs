//program to check if voter is eligible or not//
#include<stdio.h>
int main()
{
        int age;


        printf("Enter age to check : ");
        scanf("%d",&age);

        if(age>=18)
        {
           printf("You are eligible for vote");
        }
        else
        {
           printf("You are not eligible for vote");
        }
}