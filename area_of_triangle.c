//Area of triangle//

#include<stdio.h>

int main()
{
    int area,base,height;

    printf("Enter height and base : ");
    scanf("%d%d",&base,&height);

    area = 0.5*height*base;

    printf("Area of triangle : %d",area);
    
}