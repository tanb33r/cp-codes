#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
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
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
int n;
long long fac[20] = {1};
void solve() {
    int ans;
    int a[n];

    int dec[10] = {}, sum = 0;
    f(i,n) {
        int x = II;
        dec[x]++,sum+=x;
    }
    ll C = fac[n];
    f(i,10) C/=fac[dec[i]];
    string s(n,'1');
    ll tmp = stoll(s);
    C = C*sum/n*tmp;
    pr(C);


}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ff(i,1,20) fac[i] = fac[i-1] * i;
    while(cin>>n and n)
        solve();
}


