#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              cout<<#x<<"\n"
#define newl               cout<<"\n"
#define all(v)             (v).begin(), (v).end()
#define rall(v)            (v).rbegin(), (v).rend()
#define vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define F                  first
#define S                  second
#define deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define ll                 long long
#define pii                pair<int,int>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(_VA_ARGS_)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
const int mod = 1e9+7;
const int N = 1e5+7;

string s[1005];
ll vis[3005];
ll n,m;

ll fnc(ll skip) {
    string ss;

    memset(vis,0,sizeof(vis));
    for(int i=skip; i<m-skip; i++) {
        ss+=s[skip][i];
    }
    for(int i=skip+1; i<n-skip; i++) {
        ss+=s[i][m-skip-1];
    }
    for(int i=m-skip-2; i>=skip; i--) {
        ss+=s[n-skip-1][i];
    }
    for(int i=n-skip-2; i>=skip+1; i--) {
        ss+=s[i][skip];
    }
    //debb(skip<<" "<<ss);
    ll sz=ss.size(), cnt=0;
    ss+=ss;

    for(int i=0; i<sz; i++)
        if(ss[i]=='1' and ss[i+1]=='5' and ss[i+2]=='4' and ss[i+3]=='3')
            cnt++;

    return cnt;
}

void solve() {
    cin>>n>>m;

    f(i,n) cin>>s[i];

    ll mn=min(n,m);
    ll ans=0;
    for(ll i=0; i<mn/2; i++)
        ans+=fnc(i);

    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
