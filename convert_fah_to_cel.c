//Convert Fahrenheit to Celsius//


#include<stdio.h>


int main()
{
    float cel,fah;


    printf("Enter celsius to convert into Celsius : ");
    scanf("%f",&fah);


    cel = 5 * (fah - 32)/9 ;


    printf("Converted temperature : %f",cel);
}
