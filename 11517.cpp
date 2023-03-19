#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(j);i>=n;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
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

void solve() {
    int n,ans=0;
    int price = II;
    cin>>n;
    int coins[n];
    f(i,n) cin>>coins[i];
    const int con = 1000005;
    int x[10000005] = {};
    x[0]  = 1;
    f(j,n) {
    fr(i,con,0)
        if(x[i]) {
            if(x[i+coins[j]])
                x[i+coins[j]] = min(x[i]+1,x[i+coins[j]]);
            else
                x[i+coins[j]] = x[i]+1;
        }
    }
    int j = price;
    while(!x[j++]);
    pr(--j<<" "<<--x[j]);

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
