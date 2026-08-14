//program to check whether percentage is ≥ 50. If yes, check whether the entrance score is also above the required level.
#include<stdio.h>
int main()
{
    float percentage;
    float entrance_score = 80;

    printf("Enter your percentage : ");
    scanf("%f",&percentage);

    printf("Enter your entrance exam score : ");
    scanf("%f",&entrance_score);

    if(percentage>=50)
    {
        if(entrance_score>=80)
        {
            printf("You are eligible for admission");
        }
        else
        {
            printf("You are not eligible for admission due to low entrance score");
        }
    }
}