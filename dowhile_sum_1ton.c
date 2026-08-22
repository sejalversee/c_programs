//program to find the sum of numbers from 1 to N.//
#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    do
    {
        sum = sum + i;
        i++;
    }
    while(i <= n);

    printf("Sum = %d", sum);

    return 0;
}