//Input a character and use switch to check whether it is a, e, i, o, u.//
#include<stdio.h>
int main()
{
    int ch;

    printf("Enter character to check : ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel",ch);
            break;
        default:
            printf("%c is not a vowel",ch);
    }


    return 0;
    
}