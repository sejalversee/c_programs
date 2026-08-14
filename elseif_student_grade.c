//program to check student grade based on marks//
#include<stdio.h>
int main()
{
    int marks;

    printf("Enter marks to check : ");
    scanf("%d",&marks);

    if(marks>=90 && marks<=100)
    {
       printf("Student grade is A");
    }
    else if(marks>=80 && marks<90)
    {
       printf("Student grade is B");
    }
    else if(marks>=70 && marks<80)
    {
       printf("Student grade is C");
    }
    else if(marks>=60 && marks<70)
    {
       printf("Student grade is D");
    }
    else if(marks>=50 && marks<60)
    {
       printf("Student grade is E");
    }
    else
    {
       printf("Student grade is F");
    }
    return 0;   
}