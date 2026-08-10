//Area of Trapezium//

#include<stdio.h>

int main()
{
    float area,a,b,height;

    printf("Enter a,b and height : ");
    scanf("%f%f%f",&a,&b,&height);

    area = 0.5*a*b*height;

    printf("Area of Trapezium : %f",area);
}