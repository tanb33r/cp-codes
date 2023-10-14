#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define  MOD 1000000007
using namespace std;

int res(int S[],int m,int n ) {
    int i, j, x, y;

    int poss[n + 1][m];

    f(i,m)
    poss[0][i] = 1;

    for (i=1; i<n+1; i++)
        f(j,m) {
        x = (i-S[j] >= 0) ? poss[i - S[j]][j] : 0;
        y = (j >= 1) ? poss[i][j - 1] : 0;
        poss[i][j] = (x + y)%MOD;
    }
    return poss[n][m - 1];
}

int main() {
    int n,nc,t;
    cin>>t;

    while(t--) {
        cin>>nc>>n;
        int arr[nc];
        f(i,nc)
        cin>>arr[i];
        cout << res(arr, nc, n)<<"\n";
    }
}
