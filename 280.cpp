#include<stdio.h>
#include<string.h>
#define oo 0xffff
int main() {
    int n, x, y, i, j, k, m;
    int mmap[101][101];
    while(cin>>n,n) {
        memset(mmap, 0, sizeof(mmap));
        while(cin>>x,x)
            while(cin>>y,y)
                mmap[x][y] = 1;

        for(i = 1; i <= n; i++)
            for(j = 1; j <= n; j++)
                if(mmap[i][j] == 0)
                    mmap[i][j] = oo;

        for(k = 1; k <= n; k++)
            for(i = 1; i <= n; i++)
                for(j = 1; j <= n; j++)
                    mmap[i][j] = min(mmap[i][j],mmap[i][k] + mmap[k][j]);

        scanf("%d", &m);
        while(m--) {
            scanf("%d", &x);
            int Ans[101], At = 0;
            for(i = 1; i <= n; i++)
                if(mmap[x][i] == oo)
                    Ans[At++] = i;
            printf("%d", At);
            for(i = 0; i < At; i++)
                printf(" %d", Ans[i]);
            puts("");
        }
    }
    return 0;
}
