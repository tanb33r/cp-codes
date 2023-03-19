#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define  MOD 1000000007
using namespace std;

int res(int coin[],int nc,int n )
{
    int i, j, x, y;

    int poss[n + 1][nc];

    f(i,nc)
    poss[0][i] = 1;

    for (i=1; i<=n; i++)
        for (j=0; j<nc; j++)
        {
            x = (i >= coin[j]) ? poss[i - coin[j]][j] : 0;
            y = (j >= 1) ? poss[i][j - 1] : 0;
            poss[i][j] = (x + y)%MOD;
        }
    return poss[n][nc - 1];
}

int main()
{
    int n,nc,t;
    cin>>t;

    while(t--)
    {
        cin>>nc>>n;
        int arr[nc];
        f(i,nc)
        cin>>arr[i];
        cout << res(arr, nc, n)<<"\n";
    }
}

/*

1
4 4
1 1 1 1


*/
