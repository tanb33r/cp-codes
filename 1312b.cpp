#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d ",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<" "
#define vi vector<int>
typedef long long ll;
using namespace std;

int main()
{
//    ios::sync_with_stdio(0);
//    cin.tie(0);


    w(t)
    {
        in(n);
        vi a(n);
        f(i,n)
        sf(a[i]);
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        f(i,n)
        d(a[i]);

    }
}
