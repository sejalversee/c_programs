//Loan information calculator//

#include<stdio.h>

int main()
{
    float si,p,r,t;
    int info;

    printf("what you want to calculate \n1.simple interst\n2.principal\n3.rate\n4.time\nEnter your choice : ");
    scanf("%d",&info);
        


    if(info==1)
    {   printf("To calculate simple interest enter the following information \n");
        printf("enter principal : ");
        scanf("%f",&p);
        printf("Enter Rate : ");
        scanf("%f",&r);
        printf("Enter Time : ");
        scanf("%f",&t);
        si = (p*r*t)/100;

        printf("Calculated Simple interest : %f",si);

    }
    else if(info==2)
    {   printf("To calculate principal enter the following information \n");
        printf("Enter Simple interest : ");
        scanf("%f",&si);
        printf("Enter Rate : ");
        scanf("%f",&r);
        printf("Enter Time : ");
        scanf("%f",&t);
        p = (si*100)/(r*t);

        printf("Calculated principal: %f",p);
    }
    else if(info==3)
    {   printf("To calculate rate enter the following information \n");
        printf("Enter Simple interest : ");
        scanf("%f",&si);
        printf("enter principal : ");
        scanf("%f",&p);
        printf("Enter Time : ");
        scanf("%f",&t);

        r=(si*100)/(p*t);

        printf("Calculated Rate : %f",r);
    }
    else if(info==4)
    {   printf("To calculate time enter the following information \n");
        printf("Enter Simple interest : ");
        scanf("%f",&si);
        printf("enter principal : ");
        scanf("%f",&p);
        printf("Enter Rate : ");
        scanf("%f",&r);
        
        

        t=(si*100)/(p*r);

        printf("Calculated time : %f",t);
    }
    else{
        printf("Invalid input");
    }
}