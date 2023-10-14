#include <stdio.h>

int main() {
  FILE *inputFile, *outputFile;
  char ch;
  int inComment = 0;

  inputFile = fopen("input.txt", "r");
  outputFile = fopen("output.txt", "w");

  if (inputFile == NULL || outputFile == NULL) {
    printf("Error opening files.\n");
    return 1;
  }

  while ((ch = fgetc(inputFile)) != EOF) {
    if (inComment == 0) {
      if (ch == '/' && fgetc(inputFile) == '*') {
        inComment = 1;
      } else if (ch == '/' && fgetc(inputFile) == '/') {
        while ((ch = fgetc(inputFile)) != '\n') {
          // Skip the single-line comment
        }
      } else {
        fputc(ch, outputFile);
      }
    } else {
      if (ch == '*' && fgetc(inputFile) == '/') {
        inComment = 0;
      }
    }
  }

  fclose(inputFile);
  fclose(outputFile);

  return 0;
}
