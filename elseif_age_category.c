//program to take input age and check whether the person is child, adult or senior citizen//
#include<stdio.h>
int main()
{
    int age;

    printf("Enter age to check : ");
    scanf("%d",&age);
    
    if(age = 0 && age<12)
    {
        printf("Person is child");
    }
    else if(age>=12 && age<18)
    {
       printf("Person is teenager");
    }
    else if(age>=18 && age<60)
    {
       printf("Person is adult");
    }
    else
    {
       printf("Person is senior citizen");
    }
    return 0;
}             