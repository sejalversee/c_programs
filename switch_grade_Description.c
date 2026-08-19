//program to take grade A,B,C,D,F, and print its description.//
#include<stdio.h>
int main()
{
    char grade;

    printf("Enter your grade (A, B, C, D, F): ");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D':
            printf("Below Average");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invalid grade");
    }

    return 0;
}