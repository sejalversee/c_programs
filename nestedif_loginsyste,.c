//program to check username first. If username is correct, check the password.//
#include<stdio.h>
#include <stdio.h>

int main()
{
    char username;
    int password;

    printf("Enter username: ");
    scanf(" %c", &username);

    if (username == 'a')
    {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password == 1234)
        {
            printf("Login successful");
        }
        else
        {
            printf("Wrong password");
        }
    }
    else
    {
        printf("Wrong username");
    }

    return 0;
}























