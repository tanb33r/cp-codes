#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb                 emplace_back
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
const int MAX= 2e5+5;
void solve() {
    string s;
    ll ans = 0;
    int n ;
    cin>>n>>s;
    string s2="";
    int i=0;
    while(i<n) {
        int cnt = 0;
        while(i<n and s[i]=='0') {
            cnt++;
            i++;
        }
        if(cnt)
            if(cnt&1)s2+='1';
            else s2+='0';

        cnt = 0;
        while(i<n and s[i]=='1') {
            cnt++;
            i++;
        }

        if(cnt)
            if(cnt&1)s2+='1';
            else s2+='0';

    }
    deb(s2);

    i=0;
    int j;
    vector<int>v;
    f(i,s2.size())
    if(s2[i]=='1')
        v.pb(i);
    deb(v.size());
    f(i,v.size()) {
        ans+=v[i+1]-v[i];
        i++;
    }
    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


