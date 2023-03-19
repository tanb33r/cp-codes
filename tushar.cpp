#include<stdio.h>
void magicMultiply(int *ptr, int len) {
    int i, j, fact;
    for (i=len; i>=0; i--) {
        fact=1;
        for (j=1; j<=ptr[i]; j++) {
            fact*=j;
        }
        ptr[i] = fact;
    }
}
int main() {
    int *p ;
    for(int i=0; i<5; i++) {
        printf("Enter value at index %d: ", i);
        scanf("%d", (p+i));
    }
    magicMultiply(p,5);
    for (int i=0; i<5; i++) {
        printf("%d ", p[i]);
    }
}
