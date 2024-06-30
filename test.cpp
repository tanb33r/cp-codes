#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main() {
    char filename[] = "text.txt";
    char searchString[MAX_LINE_LENGTH];
    char line[MAX_LINE_LENGTH];
    FILE *file;
    int found = 0;

    // Prompt the user for the string to search
    printf("Enter the string to search: ");
    fgets(searchString, MAX_LINE_LENGTH, stdin);

    // Remove the newline character from the end of the input
    searchString[strcspn(searchString, "\n")] = 0;

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read each line of the file and search for the string
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        // Remove the newline character from the end of the line
        line[strcspn(line, "\n")] = 0;

        // Check if the search string is in the current line
        if (strstr(line, searchString) != NULL) {
            printf("Found: %s\n", line);
            found = 1;
        }
    }

    // Close the file
    fclose(file);

    if (!found) {
        printf("String not found in the file.\n");
    }

    return 0;
}
