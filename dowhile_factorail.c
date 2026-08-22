//program to find factorail using do while.//
#include <stdio.h>

int main()
{
    int num, i = 1, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        factorial = factorial * i;
        i++;
    }
    while(i <= num);

    printf("Factorial = %d", factorial);

    return 0;
}