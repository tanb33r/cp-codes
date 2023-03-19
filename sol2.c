#include <stdio.h>
int main() {
    int n,i,j;
    n=4;
    int a[4][4];
    for(i = 0 ; i<n; i++) {
        for(j = 0 ; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }


    for(i = 0 ; i<n; i++) {
        for(j = 0 ; j<n; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    printf("\n");
    for(i = 0 ; i<n; i++) {
        for(j = 0 ; j<n; j++) {
            if(j%2==0)
                printf("* ");
            else
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}


/*

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4


*/
