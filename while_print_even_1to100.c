//program to print even numbers from 1 to 100 using while loop//
#include <stdio.h>

int main()
{
        int i=1;
        
    while(i<=100)
    {
        if(i%2==0)
       { 
        printf("%d\n",i);
        
       }
       i++;
    }
    return 0;
}
