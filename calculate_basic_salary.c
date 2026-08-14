//Calculate salary //

#include <stdio.h>
int main()
{
    float gross_salary, basic_salary;

    printf("Enter gross salary : ");
    scanf("%f",&gross_salary);

    basic_salary = (gross_salary * 50)/100;

    printf("Basic salary : %f",basic_salary);

}