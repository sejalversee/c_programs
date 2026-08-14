//Input temperature and print "High Temperature" if it is above 35°C//

#include<stdio.h>

int main()
{
     float temp;

     printf("Enter temperature in Celsius : ");
     scanf("%f",&temp);

     if(temp>35)
     {
        printf("High Temperature");
     }
}