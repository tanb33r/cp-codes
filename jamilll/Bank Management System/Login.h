#ifndef LOGIN_H
#define LOGIN_H

#include <stdio.h>
#include <string.h>
#include "Structs.h"
#include "Actions.h"

void login(void)
{

    char username[50];
    char password[50];


    FILE *fp;
    struct User u1;
    struct UserPass u2;

    fp = fopen("UserInfo.txt", "r");

    if (fp == NULL)
    {
        printf("ERROR IN OPENING FILE\n");
        return;
    }

    printf(" ACCOUNT LOGIN\n");
    printf("***********************************************\n");
    printf("==== LOG IN ====\n\n");

    printf("USERNAME:\n");
    scanf("%s", username);
    printf("PASSWORD:\n");
    scanf("%s", password);

    while (fscanf(fp, "Name: %s\nAddress: %s\nDate of Birth: %s\nPhone Number: %*s\nUsername: %s\nPassword: %s\nBalance: %d\n--------------------------\n",
    u1.fname, u1.address, u1.temp, u1.username, u2.password, &u1.balance) == 6)
    {

        if (strcmp(username, u1.username) == 0 && strcmp(password, u2.password) == 0)
        {
            printf("LOGIN SUCCESSFUL\n");
            fclose(fp);
            actions(u1,u2);

            return 0;
        }
    }

    fclose(fp);
}




#endif // LOGIN_H

