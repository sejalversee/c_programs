//Swap two numbers without using a third variable//
#include <stdio.h>

int main()

{
   int a,b;
   //a=5 b=2
   printf("Enter a and b : ");
   scanf("%d%d",&a,&b);
   
  
   b = a + b;
   a = b - a;
   b = b - a;
   
   printf("a = %d b = %d",a,b);
   
    return 0;
}