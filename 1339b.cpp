#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        int x; cin>>x;
#define  w(t)         int t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio       ios::sync_with_stdio(0),cin.tie(0)
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi vector<int>
typedef long long     ll;
using namespace std;

int main() {
    w(t) {
        in(n);
        int a[n];
        int v[n];

        f(i,n)    cin>>a[i];
        sort(a,a+n);
        int k = n/2, j = 0;

        ff(i,k,n-1) {
            v[j] = a[i];
            j+=2;
        }
        j=1;
        for (int i=k-1; i>=0; i--) {
            v[j]=a[i];
            j+=2;
        }
        f(i,n)
        cout<<v[i]<<" ";
        cout<<endl;
    }
}
