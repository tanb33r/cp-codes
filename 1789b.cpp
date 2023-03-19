#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr

using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
bool ispalin(string s) {
    string s2=s;
    reverse(s.begin(),s.end());
    return s==s2;
}

typedef pair<int,int> pii;
const int MAX= 2e5+5;
void solve() {
    ll n;
    string s;
    cin>>n>>s;
    int ii=0,jj = n-1;
//    if(ispalin(s)) {
//        ps(yes);
//        return;
//    }
    int cnt = 0;
    int cnt2 = 0;
    int l = 0,r = 0;
    for(; ii <(n)/2;) {
        if(ii <(n)/2 and s[ii]==s[jj]) {
            while(ii <(n)/2 and s[ii]==s[jj]) ii++,jj--;
            cnt++;
        }
        if(ii <(n)/2 and s[ii]!=s[jj]) {
            l=ii;
            while(ii <(n)/2 and s[ii]!=s[jj])
                r=++ii,jj--;

        }
    }
    ff(i,l,r) {
        s[i]^=1;
    }
//    deb(s);
//    debb(cnt,l,r);
    if(cnt>2) {
        ps(no);
        return;
    }
    cout<<(ispalin(s)?"yes":"no")<<'\n';
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


