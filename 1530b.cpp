#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

bitset<100> a[100] ;

void solve() {
    int n,m;
    cin>>n>>m;

    f(i,n)
    f(j,m) {
        a[i][j]=0;
        if((i==0 or i == n-1) and !(j&1)) {
            a[i][j]=1;
        } else if(!(i&1) and (j==0 or (i!=0 and j == m-1))) {
            a[i][j]=1;
        }
    }
    ff(j,1,m) {
        if(a[n-1][j-1]==0 and a[n-2][j]==0) a[n-1][j] = 1;
    }
    if(a[n-2][m-1] or a[n-1][m-2] or a[n-2][m-2])  a[n-1][m-1]=0;

    f(j,m) {

        if(j==0) if(a[n-2][j] ==1)a[n-1][j] = 0;
        if(j==1) if(a[n-2][j-1] ==1)a[n-1][j] = 0;
        if(j==m-1) if(a[n-2][j] ==1)a[n-1][j] = 0;
        if(j==m-2) if(a[n-2][j+1] ==1)a[n-1][j] = 0;

    }
    f(i,n) {
        f(j,m) {
            cout<<a[i][j];
        }
        newl;
    }
    newl;
//    pr(cnt);
}
int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

