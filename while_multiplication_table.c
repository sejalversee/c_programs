//program to print multiplication table.//
#include <stdio.h>
int main()
{
    int i=1,n;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d",&n);

    while(i<=10)
        {
           printf("%d x %d = %d\n",n,i,n*i);   
           i++;
        }
            
}