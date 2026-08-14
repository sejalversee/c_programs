//Calculate rate//

#include<stdio.h>

int main()
{
    float si,p,t,r;

    printf("Enter principle : ");
    scanf("%f",&p);

    printf("Enter si : ");
    scanf("%f",&si);

    printf("Enter time : ");
    scanf("%f",&t);

    r = (si*100)/(p*t);

    printf("Rate : %f",r);
}