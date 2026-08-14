//program to check temperature category based on input temperature//
#include<stdio.h>
int main()
{
    int temperature;

    printf("Enter temperature to check : ");
    scanf("%d",&temperature);

    if(temperature<0)
    {
       printf("Temperature is freezing");
    }
    else if(temperature>=0 && temperature<10)
    {
       printf("Temperature is very cold");
    }
    else if(temperature>=10 && temperature<20)
    {
       printf("Temperature is cold");
    }
    else if(temperature>=20 && temperature<30)
    {
       printf("Temperature is normal");
    }
    else if(temperature>=30 && temperature<40)
    {
       printf("Temperature is hot");
    }
    else
    {
       printf("Temperature is very hot");
    }
}