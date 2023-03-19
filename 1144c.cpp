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

void solve() {
    int n,ans=0;
    cin>>n;
    int a[n];
    bool b = 0;
    map<int, int > m ;
    vector<int>inc,dec ;
    f(i,n) {
        cin>>a[i];
        if(++m[a[i]]>2) b = 1;
    }
    if(b) {
        ps(NO);
        return;
    }
    m.clear();
    sort(a,a+n);
    inc.pb(a[0]);
    ff(i,1,n) {
        if(i) {
            if(a[i]!=a[i-1])
                inc.pb(a[i]);
            else dec.pb(a[i]);
        }
    }
    ps(YES);
    pr(inc.size());
    vout(inc);
    pr(dec.size());
    reverse(all(dec));
    vout(dec);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
