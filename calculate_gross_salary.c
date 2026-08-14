//Calculate gross salary using basic salary and allowances

#include <stdio.h>

int main()

{
   
   
   float gross_sal,basic_sal,hra,da,other_all;
   
   printf("basic salary : ");
   scanf("%f",&basic_sal);
   
   printf("HRA : ");
   scanf("%f",&hra);
   
   printf("DA : ");
   scanf("%f",&da);
   
   printf("Other allowance : ");
   scanf("%f",&other_all);
   
   gross_sal = basic_sal+hra+da+other_all;
   
   printf("Gross salary : %f",gross_sal);
   
   
    return 0;
}