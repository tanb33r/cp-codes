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

int a[2][100005];
void solve() {
    memset(a,0,sizeof a);
    int m ;
    cin>>m;
    f(i,2) f(j,m)cin>>a[i][j];


    ll ans[m+5]{0},p[m+5]{0},d[m+5]{0},sum=0;
    for(int i = m -1; i>0; i--) {
        sum+=a[0][i];
        p[i] = sum;
    }
    sum = 0ll;
    for(int i = 0; i<m-1; i++) {
        sum+=a[1][i];
        d[i] = sum;
    }

    f(i,m) {
        if(!i) {
            ans[i] = p[i+1];
        } else if(i==m-1) {
            ans[i] = d[i-1];
        } else {
            ans[i] = max(p[i+1],d[i-1]);
        }
    }
    ll val=2e9;
    f(i,m) val = min(val,ans[i]);
    pr(val);


}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int tc=1;
    cin>>tc;
    while(tc--)
        solve();
}
