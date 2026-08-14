//program to check profit or loss//
#include<stdio.h>
int main()
{
        int cp,sp;

        printf("Enter cost price and selling price : ");
        scanf("%d%d",&cp,&sp);

        if(sp>cp)
        {
           printf("You have made profit of %d",sp-cp);
        }
        else
        {
           printf("You have incurred loss of %d",cp-sp);
        }
}