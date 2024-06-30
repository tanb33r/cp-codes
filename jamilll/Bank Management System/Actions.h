#ifndef ACTIONS_H
#define ACTIONS_H

#include "structs.h"
#include "transaction.h"

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void actions(struct User u1,struct UserPass u2)
{
    int choice=0;
    system("cls");
    printf("\n");
    printf(" 1. Profile Info\n");
    printf(" 2. WITHDRAW\n");
    printf(" 3. TRANSFER MONEY\n");
    printf(" 4. LOG OUT\n");
    printf(" 5. EXIT\n\n");
    printf(" ENTER YOUR CHOICES\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Name    : %s\n", u1.fname);
        printf("Address : %s\n", u1.address);
        printf("DOB     : %s\n", u1.temp);
        printf("Username: %s\n", u1.username);
        printf("Password: %s\n", u2.password);
        printf("Balance : %d\n", u1.balance);
        printf("\n");
        break;

    case 2:
        //withdraw();
        break;

    case 3:
        transferMoney(u1,u2);
        break;

    case 4:
        exit(0);
        break;
    }
}
#endif // ACTIONS_H
