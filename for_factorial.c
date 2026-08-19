//program to find factorial//
#include <stdio.h>
int main()
{
   int fact=1,i,n;
   
   printf("Enter number to find factorial : ");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {    
       fact = fact * i;
       
   }
   printf("%d",fact);
}


