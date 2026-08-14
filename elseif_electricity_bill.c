//program to check electricity bill based on units consumed//
#include<stdio.h>
int main()
{
    int units;
    float bill;

    printf("Enter units consumed : ");
    scanf("%d",&units);

    if(units<=100)
    {
       bill = units * 1.5;
    }
    else if(units>100 && units<=200)
    {
       bill = (100 * 1.5) + ((units-100) * 2.5);
    }
    else if(units>200 && units<=300)
    {
       bill = (100 * 1.5) + (100 * 2.5) + ((units-200) * 4);
    }
    else
    {
       bill = (100 * 1.5) + (100 * 2.5) + (100 * 4) + ((units-300) * 6);
    }

    printf("Electricity bill is : %f",bill);
}