//program to reverse the number using do while loop.//
#include <stdio.h>

int main()
{
    int num, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    while(num != 0);

    printf("Reverse = %d", reverse);

    return 0;
}