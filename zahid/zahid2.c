#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int a[100][100];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int sum = 0;
    for(int i=0; i<n; i++) {
        int max = -1;
        for(int j=0; j<m; j++) {
            if(max<a[i][j]) max=a[i][j];
        }
        sum+=max;
    }
    printf("%d\n",sum);
}
