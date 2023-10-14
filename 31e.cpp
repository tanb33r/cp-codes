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

unsigned long long pw[20],dp[40][20];
const int mod = 1e9+7;
const int N = 1e5+7;

void solve() {
    ll n;
    string s;
    cin>>n>>s;
    pw[0]=1;
    for(i=1; i<=n; i++) pw[i]=pw[i-1]*10;

    for(i=n*2; i>=1; i--) {
        for(j=0; j<=n and j<=n*2-i+1; j++) {
            k=n*2-i+1-j;
            if(j) dp[i][j]=max(dp[i][j],dp[i+1][j-1]+pw[j]*(s[i]-'0'));
            if(k) dp[i][j]=max(dp[i][j],dp[i+1][j]+pw[k]*(s[i]-'0'));
        }
    }
    for(i=1,j=n; i<=n*2; i++) {
        if(j && dp[i][j]==dp[i+1][j-1]+pw[j]*(s[i]-'0'))
            printf("H"),j--;
        else printf("M");
    }

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

