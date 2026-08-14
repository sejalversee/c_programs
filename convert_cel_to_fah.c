//Convert Celsius to Fahrenheit//

#include<stdio.h>

int main()
{
    float cel,fah;

    printf("Enter celsius to convert into fahrenhit : ");
    scanf("%f",&cel);

    fah = (9 * cel)/5 + 32;

    printf("Converted temperature : %f",fah);
}