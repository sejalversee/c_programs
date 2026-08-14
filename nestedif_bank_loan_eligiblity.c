//program to check age,income,credit score,existing loan and employment status for bank loan eligibility//
#include<stdio.h>
int main()
{
    int age;
    float income;
    int credit_score;
    int existing_loan;
    char employment_status;

    printf("Enter your age : ");
    scanf("%d",&age);

    printf("Enter your income : ");
    scanf("%f",&income);

    printf("Enter your credit score : ");
    scanf("%d",&credit_score);

    printf("Do you have any existing loan? (1 for Yes, 0 for No) : ");
    scanf("%d",&existing_loan);

    printf("Are you employed? (Y/N) : ");
    scanf(" %c",&employment_status);

    if(age>=21)
    {
        if(income>=30000)
        {
            if(credit_score>=700)
            {
                if(existing_loan==0)
                {
                    if(employment_status=='Y' || employment_status=='y')
                    {
                        printf("You are eligible for bank loan");
                    }
                    else
                    {
                        printf("You are not eligible for bank loan due to unemployment");
                    }
                }
                else
                {
                    printf("You are not eligible for bank loan due to existing loan");
                }
            }
            else
            {
                printf("You are not eligible for bank loan due to low credit score");
            }
        }
        else
        {
            printf("You are not eligible for bank loan due to low income");
        }
    }
    else
    {
        printf("You are not eligible for bank loan due to age restriction");
    }
}