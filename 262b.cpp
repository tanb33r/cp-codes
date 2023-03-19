#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define endl "\n"
#define fopen freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define fastio ios::sync_with_stdio(0),cin.tie(0)
#define PI acos(-1.0)
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;

int main() {
    in(n);
    in(k);
    int a[n];
    f(i,n)
    cin>>a[i];

    sort(a,a+n);
    int k2 = k;
    f(i,n)
    if(i<n && a[i]<0 && k)
        a[i]*=-1,k--;



    if(k&1) {
        sort(a,a+n);
        a[0] *=-1;
    }
    ll sum = 0 ;
    f(i,n)
    sum+=a[i];

    d(sum);
}

