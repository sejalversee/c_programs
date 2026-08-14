//program to check employee salary grade based on input salary//
#include<stdio.h>
int main()
{
    float salary;

    printf("Enter salary to check : ");
    scanf("%f",&salary);

    if(salary<20000)
    {
       printf("Employee salary grade is low");
    }
    else if(salary>=20000 && salary<50000)
    {
       printf("Employee salary grade is middle");
    }
    else if(salary>=50000 && salary<100000)
    {
       printf("Employee salary grade is high");
    }
    else
    {
       printf("Employee salary grade is very high");
    }
    
}