//program to Check whether marks are ≥ 40. If passed, check whether marks are ≥ 75.//
#include<stdio.h>
int main()
{
    int marks;

    printf("Enter marks to check : ");
    scanf("%d",&marks);

    if(marks>=40)
    {
        printf("Student is pass\n");
        if(marks>=75)
        {
            printf("Student is pass with distinction");
        }
        else
        {
            printf("Student is pass with first class");
        }
    }
}