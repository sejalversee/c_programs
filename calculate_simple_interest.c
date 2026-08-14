//calculate simple interest//

#include<stdio.h>

int main()
{
    float si,p,r,t;

    printf("Enter principle : ");
    scanf("%f",&p);

    printf("Enter rate : ");
    scanf("%f",&r);

    printf("Enter time : ");
    scanf("%f",&t);

    si = (p*r*t)/100 ;

    printf("Simple Interest : %f",si);

}