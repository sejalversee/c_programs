//Perimeter of Parallelogram//

#include<stdio.h>

int main()
{
    float a,b,peri;

    printf("Enter value of a and b to calculate perimeter of paralellogram : ");
    scanf("%f%f",&a,&b);

    peri = 2*(a+b);

    printf("Perimeter of Parallelogram : %f",peri);
}