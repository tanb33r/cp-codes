#include <stdio.h>
#include <stdbool.h>

int main() {
    FILE *fp1, *fp2;
    int c;
    bool in_comment = false;
    bool in_line_comment = false;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (!fp1) {
        printf("Unable to open the file.\n");
        return 0;
    }

    while((c = fgetc(fp1)) != EOF) {
        if (in_comment) {
            if (c == '*') {
                c = fgetc(fp1);
                if (c == '/') {
                    in_comment = false;
                }
            }
        } else if (in_line_comment) {
            if (c == '\n') {
                in_line_comment = false;
                fputc(c, fp2);
            }
        } else {
            if (c == '/') {
                c = fgetc(fp1);
                if (c == '*') {
                    in_comment = true;
                } else if (c == '/') {
                    in_line_comment = true;
                } else {
                    fputc('/', fp2);
                    fputc(c, fp2);
                }
            } else {
                fputc(c, fp2);
            }
        }
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
