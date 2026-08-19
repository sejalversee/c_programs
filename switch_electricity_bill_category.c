//program totake a input a category such as residential/commercial and calculate the bill according to the selected category.??
#include<stdio.h>
int main()
{
    int category, units;
    float bill;

    printf("Electricity Categories:\n");
    printf("1. Domestic\n");
    printf("2. Commercial\n");
    printf("3. Industrial\n");
    printf("4. Agricultural\n");

    printf("\nEnter category: ");
    scanf("%d", &category);

    printf("Enter units consumed: ");
    scanf("%d", &units);

    switch(category)
    {
        case 1:
            bill = units * 5;
            printf("Category: Domestic\n");
            printf("Electricity Bill = %f", bill);
            break;

        case 2:
            bill = units * 8;
            printf("Category: Commercial\n");
            printf("Electricity Bill = %f", bill);
            break;

        case 3:
            bill = units * 10;
            printf("Category: Industrial\n");
            printf("Electricity Bill = %f", bill);
            break;

        case 4:
            bill = units * 3;
            printf("Category: Agricultural\n");
            printf("Electricity Bill = %f", bill);
            break;

        default:
            printf("Invalid category!");
    }

    return 0;
}

    
    

    
    
    
    


}