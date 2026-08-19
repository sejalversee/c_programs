// program to print sum of numbers from 1 to N//
#include <stdio.h>
int main()
{
   int num,i,sum=0;
   
   printf("enter number : ");
   scanf("%d",&num);
   
   for(i=1;i<=num;i++)
   {    
       sum = sum + i;
       
   }
        printf("%d\n",sum);
}
