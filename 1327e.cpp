#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
const int MOD = 998244353;
using namespace std;
typedef pair<int,int> pii;
ll p[200005];
void solve() {
    int n;
    cin>>n;
    ff(i,1,n) {
        ll x = (20*9*p[n-i-1])%MOD;
        x += (n - 1 - i) * 10 * 9 * 9 * p[n - i - 2];
        cout<<x%MOD<<' ';
    }
    cout<<10<<'\n';

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    p[0]=1;
    ff(i,1,200005)  p[i] = (p[i - 1] * 10) % MOD;

    while(t--)
        solve();
}



