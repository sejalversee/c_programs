//calculate principle//

#include<stdio.h>

int main()
{
    float p,si,r,t;

    printf("Enter simple intrest : ");
    scanf("%f",&si);
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("Enter time : ");
    scanf("%f",&t);

    p = (si*100)/(r*t);

    printf("Principle : %f",p);
}