//calculate time//

#include<stdio.h>

int main()
{
    float t,si,p,r;

     printf("Enter principle : ");
     scanf("%f",&p);

     printf("Enter rate : ");
     scanf("%f",&r);

     printf("Enter simple interest : ");
     scanf("%f",&si);


    t = (si*100)/(p*r);

    printf("Time : %f",t);

}  