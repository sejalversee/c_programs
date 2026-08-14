//program to check whether the student is pass or fail//
#include<stdio.h>
int main()
{
    int marks;

    printf("Enter marks to check : ");
    scanf("%d",&marks);
    if(marks>=35)
    {
       printf("Student is pass");
    }
    else
    {
       printf("Student is fail");
    }
}