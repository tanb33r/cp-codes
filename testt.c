#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main() {
    char filename[] = "text.txt";
    char tempFilename[] = "temp.txt";
//    char searchString[MAX_LINE_LENGTH];
    char line[MAX_LINE_LENGTH];
    FILE *file, *tempFile;
    int found = 0;
    int lineToRemove = 0;

    // Prompt the user for the string to search
    printf("Enter the string to search: ");


    char inputString[100];
    char searchString[256] = "Username: ";
    scanf("%s", inputString);
    strcat(searchString,inputString);

    // Remove the newline character from the end of the input
    searchString[strcspn(searchString, "\n")] = 0;

    // Open the original file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Open the temporary file for writing
    tempFile = fopen(tempFilename, "w");
    if (tempFile == NULL) {
        perror("Error opening temporary file");
        fclose(file);
        return 1;
    }

    // Read each line of the file
//            fputs(line, tempFile);
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        // Check if we need to skip the next line
        if (lineToRemove == 1) {
            lineToRemove = 0;
            found = 1;
            fputs(line, tempFile);
            fgets(line, MAX_LINE_LENGTH, file);

            char baseString[] = "Balance: ";

            char label[20];
            int balance;

            // Use sscanf to parse the integer part from the string
            if (sscanf(line, "%19s %d", label, &balance) != 2) {
                perror("Error parsing the string");
                return 1;
            }

            // Print the parsed values to verify
            printf("Label: %s\n", label);
            printf("Balance: %d\n", balance);




//            int balance = 122123300;
            char result[256];

            sprintf(result, "%s%d\n", baseString, balance);


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
//    fclose(filename);
//    fclose(tempFilename);

    // Replace the original file with the temporary file
    if (found) {
        if (remove(filename) != 0) {
            perror("Error deleting the original file");
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

    return 0;
}
