//program to print even numbers from 1 to 20 using do while loop//
#include <stdio.h>


int main()
{
    int i = 1;
    
    do{ 
        if(i%2!=0){
        printf("%d\n",i);
        }
        i++;
    }while(i<=20);


    return 0;
}