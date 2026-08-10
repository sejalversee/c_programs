//Area of Ellipse//
#include<stdio.h>

int main()
{
    float pi=3.14,a,b,area;

    printf("Enter a and b to find area of Ellipse: ");
    scanf("%f%f",&a,&b);

    area = pi * a * b;

    printf("Area of Ellipse : %f",area);
}