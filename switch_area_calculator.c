//program to display a menu to calculate the area of:Circle,Rectangle,Square,Triangle.//
#include<stdio.h>
int main()
{
    int choice;
    float area, radius, length, breadth, side, base, height;

    printf("Menu:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("4. Triangle\n");
    printf("5. Exit\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of Circle: %f\n", area);
            break;
        case 2:
            printf("Enter length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle: %f\n", area);
            break;
        case 3:
            printf("Enter side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square: %f\n", area);
            break;
        case 4:
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle: %f\n", area);
            break;
        case 5:
            printf("Exiting the program\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}