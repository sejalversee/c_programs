//program to Check whether age is 18 or above. If eligible, check whether age is 60+.//
#include<stdio.h>
int main()
{
    int age;

    printf("Enter age to check : ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("You are eligible for vote\n");
        if(age>=60)
        {
            printf("You are senior citizen");
        }
        else
        {
            printf("You are adult");
        }
    }
}