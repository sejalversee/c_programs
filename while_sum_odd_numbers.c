//program to find the sum of odd numbers from 1 to N..//
#include <stdio.h>
int main()
{
    int i=1,n;
    int sum = 0;

    printf("Enter number to find the sum of numbers from 1 to N: ");
    scanf("%d",&n);

    while(i<=n)
    {   
        if(i%2!=0){
            sum = sum + i;
        }
        i++;
    }
    printf("Sum of odd numbers from 1 to %d is: %d", n, sum);
}