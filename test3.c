#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main() {
    char filename[] = "text.txt";
    char tempFilename[] = "temp.txt";
    char searchString[MAX_LINE_LENGTH];
    char replacementLine[MAX_LINE_LENGTH];
    char line[MAX_LINE_LENGTH];
    FILE *file, *tempFile;
    int found = 0;
    int replaceNextLine = 0;
    int removeNextLine = 0;

    // Prompt the user for the string to search
    printf("Enter the string to search: ");
    fgets(searchString, MAX_LINE_LENGTH, stdin);

    // Remove the newline character from the end of the input
    searchString[strcspn(searchString, "\n")] = 0;

    // Prompt the user for the replacement line
    printf("Enter the replacement line: ");
    fgets(replacementLine, MAX_LINE_LENGTH, stdin);

    // Remove the newline character from the end of the replacement line
    replacementLine[strcspn(replacementLine, "\n")] = 0;

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
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if (removeNextLine) {
            removeNextLine = 0;
            continue;
        }

        // Write the current line to the temporary file
        fputs(line, tempFile);

        // Check if the search string is in the current line
        if (replaceNextLine) {
            // Write the replacement line to the temporary file
            fputs(replacementLine, tempFile);
            fputs("\n", tempFile);

            // Set flag to remove the next line
            removeNextLine = 1;
            replaceNextLine = 0;
            found = 1;
        }

        // Remove the newline character from the end of the line for strstr comparison
        line[strcspn(line, "\n")] = 0;

        if (strstr(line, searchString) != NULL) {
            replaceNextLine = 1;
        }
    }

    // Close both files
    fclose(file);
    fclose(tempFile);

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

        printf("The line following the matched string has been replaced and the subsequent line removed successfully.\n");
    } else {
        // If no match was found, delete the temporary file
        remove(tempFilename);
        printf("String not found in the file.\n");
    }

    return 0;
}
