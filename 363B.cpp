#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)

using namespace std;
int main()
{
    int n, m ;
    cin>>n>>m;
    int p[n];
    f(i,n)
        scanf("%d",&p[i]);
    int x,k[n+1], mn=1e9,ans;

    for(int i=1; i<=n; i++)
        k[i] = k[i-1] + p[i-1];

    f(i,n-m+1)
    {
        x = k[i+m]-k[i];
        if(mn>x)
            mn = x,ans = i+1;
    }
    cout<<ans;
}
/*

7 3
1 2 6 6 1 1 1
*/
