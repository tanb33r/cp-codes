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
    int a[n];
    int b[n];
    f(i,n) {
        cin>>a[i];
        b[i] = a[i];
    }

    sort(a,a+n);
    int c = 0;
    int k = 0;
    f(i,n) {
        if(i == b[i])
            c++;
    }
//d(c);
    if(c == n-2 || c==n) {
        d(n);
        return 0;
    }

    f(i,n) {
        if(b[i] != i) {
            if(i == b[b[i]] ) {
                d(c+2);
                return 0;
            }
        }
    }
    d(c+1);
}


