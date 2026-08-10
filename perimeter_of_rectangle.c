//Area of rectangle//

#include<stdio.h>

int main()
{
    float length,width,peri;

    printf("Enter length and width to calculate perimeter of rectangle : ");
    scanf("%f%f",&length,&width);

    peri = 2 * (length+width);

    printf("Perimeter of rectangle : %f",peri);
    
}