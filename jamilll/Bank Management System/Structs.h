#ifndef STRUCTS_H
#define STRUCTS_H
#include <stdio.h>

struct User
{
    char username[50];
    int date, month, year;
    char pnumber[50];
    char fname[50];
    char address[50];
    char temp[50];
    int balance;
};

struct money
{
    char usernameto[50];
    char userpersonfrom[50];
    long int money1;
};

struct UserPass
{
    char password[50];
};

#endif // STRUCTS_H
