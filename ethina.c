#include<stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    char c[n][n];
    int i,j;
    for(i = 0 ; i<n; i++) {
        for(j =0 ; j<n; j++) {
            char x;

            scanf("%c",&x);
            scanf("%c",&c[i][j]);
        }
    }
    for(i =n-1 ; i>=0; i--) {
        printf("%c,",c[i][i]);
    }
    printf("\n");



}
