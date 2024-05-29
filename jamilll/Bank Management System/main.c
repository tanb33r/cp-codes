#include "CreateAccount.h"

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    int i, a, b, choice;
    int passwordlength;

    printf("WELCOME TO BANK ACCOUNT SYSTEM\n\n");

    printf("++++++++++++++++++++++++++++++++++\n");


    printf("1.Create Account\n");
    printf("2.Log into Your Account\n");
    printf("3.EXIT\n\n");
    printf("\n\nENTER YOUR CHOICE\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n\n USERNAME 50 CHARACTERS MAX!!");
        printf("\n\n PASSWORD 50 CHARACTERS MAX!!");
        createaAccount();
        break;

    case 2:
        login();
        break;

    case 3:
        exit(0);
        break;
        getch();
    }
}
