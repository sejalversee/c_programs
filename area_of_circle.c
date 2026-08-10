//Calculate area of a circle//

#include<stdio.h>

int main()
{
    float pi=3.14,r,area;

    printf("Enter radius to calculate area of circle : ");
    scanf("%f",&r);

    area=pi*r*r;

    printf("Area of circle : %f ",area);
}