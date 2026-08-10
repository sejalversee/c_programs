//perimeter of Trapezium//


#include<stdio.h>


int main()
{
    float peri,a,b,c,d;


    printf("Enter 4 sides to calculate perimetr of Trapezium : ");
    scanf("%f%f%f%f",&a,&b,&c,&d);


    peri = a+b+c+d;


    printf("Perimeter of Trapezium : %f",peri);


}