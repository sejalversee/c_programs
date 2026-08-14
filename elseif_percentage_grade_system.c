//progrma to take input marks of 6 subjects and calculate percentage and grade of student//
#include<stdio.h>
int main()
{
    int marks1, marks2, marks3, marks4, marks5, marks6;
    float percentage;

    printf("Enter marks of 6 subjects: ");
    scanf("%d %d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5, &marks6);

    percentage = (marks1 + marks2 + marks3 + marks4 + marks5 + marks6) / 6.0;

    printf("Percentage: %f\n", percentage);

    if(percentage>=90 && percentage<=100)
    {
       printf("Student grade is A");
    }
    else if(percentage>=80 && percentage<90)
    {
       printf("Student grade is B");
    }
    else if(percentage>=70 && percentage<80)
    {
       printf("Student grade is C");
    }
    else if(percentage>=60 && percentage<70)
    {
       printf("Student grade is D");
    }
    else if(percentage>=50 && percentage<60)
    {
       printf("Student grade is E");
    }
    else
    {
       printf("Student grade is F");
    }
}