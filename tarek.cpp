#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter Consumption: ");
    scanf("%d", &n);
    int bill = 0;
    if(n>100) {
        bill = bill + 100*3;
        n = n - 100;
    } else {
        bill = bill + n*3;
    }
    if(n>400) {
        bill = bill + 400*5;
        n = n - 400;
    } else {
        bill = bill + n*5;
    }
    if(n>1500) {
        bill = bill + 1500*8;
        n = n - 1500;
    } else {
        bill = bill + n*8;
    }
    if(n>0) {
        bill = bill + n*12;
    }
    printf("Total Bill: %d",bill);
    return 0;
}
