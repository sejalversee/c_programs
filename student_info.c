//Store and print student information//

#include<stdio.h>
int main()
{
    int roll_no;
    float per;
    char name[30],address[10],dob[10];

    printf("Enter your roll number : ");
    scanf("%d",&roll_no);

    printf("Enter your name : ");
    scanf("%s",name);

    printf("Enter your date of birth : ");
    scanf("%s",&dob);

    printf("Enter your percentage : ");
    scanf("%f",&per);

    printf("Enter your address : ");
    scanf("%s",address);

    printf("----------STUDENT INFORMATION----------\n");
    printf("Roll Number : %d\n",roll_no);
    printf("Name : %s\n",name);
    printf("Date of Birth : %s\n",dob);
    printf("Percentage : %f\n",per);
    printf("Address : %s\n",address);

}