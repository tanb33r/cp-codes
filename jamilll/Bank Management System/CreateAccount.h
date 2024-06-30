#ifndef CREATEACCOUNT_H
#define CREATEACCOUNT_H

#include "Structs.h"
#include "Login.h"

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void createaAccount(void)
{
    char password[20];
    int passwordlength, i;
    char ch;
    FILE *fp;

    struct User u1;
    u1.balance = 0;

    fp = fopen("UserInfo.txt", "a");
    if (fp == NULL)
    {
        perror("Failed to open file");
        return;
    }

    printf("\n\n+++++CREATE ACCOUNT+++++");

    printf("\n\nNAME\n");
    scanf("%s", u1.fname);

    printf("\n\nADDRESS\n");
    scanf("%s", u1.address);

    printf("\n\nDATE OF BIRTH\n");
    printf("\nDATE-");
    scanf("%d", &u1.date);
    printf("\nMONTH-");
    scanf("%d", &u1.month);
    printf("\nYEAR-");
    scanf("%d", &u1.year);

    printf("\n\nPHONE NUMBER\n");
    scanf("%s", u1.pnumber);

    printf("\n\nUSERNAME\n");
    scanf("%s", u1.username);

    printf("\n\nPASSWORD\n");


    i = 0;
    while ((ch = getch()) != 13 && i < sizeof(password) - 1)
    {
        password[i++] = ch;
        printf("*");
    }
    password[i] = '\0';




    fprintf(fp, "Name: %s\n", u1.fname);
    fprintf(fp, "Address: %s\n", u1.address);
    fprintf(fp, "Date of Birth: %02d-%02d-%04d\n", u1.date, u1.month, u1.year);
    fprintf(fp, "Phone Number: %s\n", u1.pnumber);
    fprintf(fp, "Username: %s\n", u1.username);
    fprintf(fp, "Password: %s\n", password);
    fprintf(fp, "Balance: %d\n", u1.balance);
    fprintf(fp, "--------------------------\n");

    fclose(fp);
    accountcreated();
}

void accountcreated(void)
{
    printf("Account Created\n");
    printf("Press enter to login");

    getch();
    login();
}

#endif
