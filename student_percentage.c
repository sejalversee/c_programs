//calculate student percentage//

#include<stdio.h>

int main()
{ 
    
    
    int marks1, marks2, marks3, marks4, marks5;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);

    percentage = (marks1 + marks2 + marks3 + marks4 + marks5) / 5.0;

    printf("Percentage: %f\n", percentage);

    return 0;
    

}

    

    
    

    
