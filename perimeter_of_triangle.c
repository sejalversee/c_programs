//Area of triangle//

#include<stdio.h>

int main()
{
    float peri,a,b,c;

    printf("Enter 3 values of triangle to calculate perimeter of triangle : ");
    scanf("%f%f%f",&a,&b,&c);

    peri = a+b+c;

    printf("Perimeter of triangle : %f",peri);
}