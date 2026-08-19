//program to create a menu to convert km-m,m-cm,kg-gr,hr-min,day-hr//
#include<stdio.h>
int main()
{
    int choice;
    float km, m, cm, kg, gr, hr, min, day;

    printf("Menu:\n");
    printf("1. Kilometer to Meter\n");  
    printf("2. Meter to Centimeter\n");
    printf("3. Kilogram to Gram\n");
    printf("4. Hour to Minute\n");
    printf("5. Day to Hour\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter distance in kilometers: ");
            scanf("%f", &km);
            m = km * 1000;
            printf("%.2f kilometers = %.2f meters\n", km, m);
            break;
        case 2:
            printf("Enter distance in meters: ");
            scanf("%f", &m);
            cm = m * 100;
            printf("%.2f meters = %.2f centimeters\n", m, cm);
            break;
        case 3:
            printf("Enter weight in kilograms: ");
            scanf("%f", &kg);
            gr = kg * 1000;
            printf("%.2f kilograms = %.2f grams\n", kg, gr);
            break;
        case 4:
            printf("Enter time in hours: ");
            scanf("%f", &hr);
            min = hr * 60;
            printf("%.2f hours = %.2f minutes\n", hr, min);
            break;
        case 5:
            printf("Enter time in days: ");
            scanf("%f", &day);
            hr = day * 24;
            printf("%.2f days = %.2f hours\n", day, hr);
            break;
        default:
            printf("Invalid choice");
    }

}