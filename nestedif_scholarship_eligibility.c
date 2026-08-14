//program to first check minimum percentage. If eligible, check family income. If that also qualifies, approve the scholarship.
#include<stdio.h>
int main()
{
    float percentage;
    float family_income;

    printf("Enter your percentage : ");
    scanf("%f",&percentage);

    printf("Enter your family income : ");
    scanf("%f",&family_income);

    if(percentage>=75)
    {
        if(family_income<=50000)
        {
            printf("You are eligible for scholarship");
        }
        else
        {
            printf("You are not eligible for scholarship due to high family income");
        }
    }
    else
    {
        printf("You are not eligible for scholarship due to low percentage");
    }
}