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
    fastio;
    w(t) {
        int ans=0;
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        int d = a[2] - a[1];

        if(d<=a[0]) {
            a[1] += d;
            a[0] -= d;
            a[1]+=a[0]/2; }
        else
            a[1] += a[0] ;
        cout<<a[1]<<endl;  } }


