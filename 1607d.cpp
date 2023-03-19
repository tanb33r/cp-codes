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
#define  rall(v)            (v).rbegin(), (v).rend()
#define  dev(v)             cerr<<(#x) <<" = "; for(int I=0;I<(v).size();I++)cerr<<v[I]<<" ";cout<<"\n"
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
typedef vector<ll> vl;

void solve() {
    int n,ans;
    cin>>n;
    int a[n];
    vl v,b,r;
    f(i,n) {
        cin>>a[i];
    }
    string s;
    cin>>s;
    f(i,n) {
        (s[i]=='R'?r.pb(a[i]) : b.pb(a[i]));
        if(s[i]=='R' and a[i]>n or (s[i]=='B' and a[i]<1))  {
            (ps(no));
            return;
        }
    }

//    vout(b);
    sort(all(b));
    sort(rall(r));
    int x=1;
    int tar=1;
    bool flag = 1;
    f(i,b.size()) {
        if(b[i]<=i) flag = 0;
    }
    deb(flag);
    x = n;
    f(i,r.size()) {
        if(r[i]>x--) flag = 0;
    }

    deb(flag);
    hmm(flag);

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


