#include <stdio.h>

int main() {

    int n = 2000;
    int i,j=1;
    int sum = 0;
    for(i=1; i<=n; j = i+j,i++) {
        printf("%d,",j);
        sum = sum+j;
    }

  printf("\n%d\n",sum);
}

