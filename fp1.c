#include<stdio.h>
void change (int *x, int *y, int z) {
    *x=*x+10;
    *y=*y+3;
    z=z+5;
    return;
}
int main() {
    int LAST_THREE_DIGIT_OF_YOUR_STUDENT_ID = 289;
    int a=LAST_THREE_DIGIT_OF_YOUR_STUDENT_ID%5;
    int b=LAST_THREE_DIGIT_OF_YOUR_STUDENT_ID/5;

    int c= LAST_THREE_DIGIT_OF_YOUR_STUDENT_ID;
    printf("%d %d %d\n", a, b, c);
    change(&a, &b, c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
