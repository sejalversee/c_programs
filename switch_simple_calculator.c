//program to take input two numbers and an operator (+, -, *, /) and perform the operation.//
#include<stdio.h>
int main()
{
    int num1, num2;
    char operator;


    printf("1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n5 - modulus\nEnter your choice : ");
    scanf("%d", &operator);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);


    switch (operator)
    {
        case 1 : 
            printf("Addition: %d", num1 + num2);
            break;
        case 2 :
            printf("Subtraction: %d", num1 - num2);
            break;
        case 3 :
            printf("Multiplication: %d", num1 * num2);
            break;  
        case 4 :
            printf("Division: %d", num1 / num2);
            break;
        case 5 :
            printf("Modulus: %d", num1 % num2);
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}