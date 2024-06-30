#ifndef TRANSACTIONS_H_
#define TRANSACTIONS_H_

#define MAX_LINE_LENGTH 256
#include <stdlib.h>
#include <string.h>

int changeBalance(char name[], int amount) {
    int possible = 1;
    char filename[] = "UserInfo.txt";
    char tempFilename[] = "temp.txt";

    char line[MAX_LINE_LENGTH];
    FILE *file, *tempFile;
    int found = 0;
    int lineToRemove = 0;

    char searchString[256] = "Username: ";
    strcat(searchString,name);
    searchString[strcspn(searchString, "\n")] = 0;



    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    tempFile = fopen(tempFilename, "w");
    if (tempFile == NULL) {
        perror("Error opening temporary file");
        fclose(file);
        return 1;
    }

    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        // Check if we need to skip the next line
        if (lineToRemove == 1) {
            lineToRemove = 0;
            found = 1;
            fputs(line, tempFile);
            fgets(line, MAX_LINE_LENGTH, file);

            char label[20];
            int balance;

            if (sscanf(line, "%19s %d", label, &balance) != 2) {
                perror("Error parsing the string");
                return 1;
            }

            char result[256];

            // in case of deduction
            if(balance+amount < 0) {
                amount = 0;
                possible = 0;
            }

            sprintf(result, "%s %d\n", label, balance+amount);

            fputs(result, tempFile);
            continue;
        }

        // Write the current line to the temporary file
        fputs(line, tempFile);

        // Remove the newline character from the end of the line
        line[strcspn(line, "\n")] = 0;

        // Check if the search string is in the current line
        if (strstr(line, searchString) != NULL) {
            lineToRemove = 1;
        }
    }

    // Close both files
    fclose(file);
    fclose(tempFile);

    if(!possible)
        return 0;

    // Replace the original file with the temporary file
    if (found) {
        if (remove(filename) != 0) {
            perror("-");
            return 1;
        }

        if (rename(tempFilename, filename) != 0) {
            perror("Error renaming the temporary file");
            return 1;
        }

        printf("The line following the matched string has been removed successfully.\n");
    } else {
        // If no match was found, delete the temporary file
        remove(tempFilename);
        printf("String not found in the file.\n");
    }
    return 1;
}


void transferMoney(struct User u1,struct UserPass u2) {
    char receiverName[50];
    int amount;

    printf("Enter the amount you want to transfer:");
    scanf("%d", &amount);

    struct User p1;
    struct UserPass p2;


    printf("Enter the name to transfer: ");

    char inputString[100];
    scanf("%s", inputString);

    //check balance
    int isPossible = changeBalance(u1.username, -amount);
    if(isPossible)
        changeBalance(inputString, amount);
    else
        printf("Not enough balance\n");


    return 0;
}

#endif // TRANSACTIONS_H_
