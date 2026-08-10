//Area of Rhombus//

#include<stdio.h>

int main()
{
    float diagonal1,diagonal2,area;

    printf("Enter both diagonal : ");
    scanf("%f%f",&diagonal1,&diagonal2);

    area = 0.5*diagonal1*diagonal2;

    printf("Area of Rhombus : %f",area);
}