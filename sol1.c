
#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);


    for(i = 0 ; i<n; i++) {
        for(j = n-i; j<=n; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i = 2 ; i<=n; i++) {
        for(j = i; j<=n; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }

}
