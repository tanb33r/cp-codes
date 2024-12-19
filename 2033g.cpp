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
const int mod = 1e9+7;
const int N = 1e5+7;

ll arr[500010];
ll dp[100005][4];
ll n;

ll DP(ll src, ll isSwap) {
    if(n%2==0 and src>n/2) return 0;
    if(src > n/2+1) return 0;

    if(dp[src][isSwap]!=-1) return dp[src][isSwap];

    ll a=0, j=n-src+1, b=0, ans=0;
    if(isSwap == 0 ) {
        if(arr[src-1]==arr[src])
            a++;

        if(arr[j]==arr[j+1])
            a++;

        if(arr[src-1]==arr[j])
            b++;

        if(arr[src]==arr[j+1])
            b++;

        ans = min(a+DP(src+1, 0), b+ DP(src+1, 1));

    } else {
        if(arr[src-1]==arr[src])
            a++;

        if(arr[j]==arr[j+1])
            a++;

        if(arr[src-1]==arr[j])
            b++;

        if(arr[src]==arr[j+1])
            b++;

        ans = min(b+DP(src+1, 0), a+ DP(src+1, 1));
    }

    if(src == n/2 and n%2 == 0 and arr[src] == arr[j])
        ans++;

    return dp[src][isSwap]=ans;
}

void solve() {
    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=0; j<=2; j++)
            dp[i][j]=-1;

    for(int i=1; i<=n; i++)
        cin>>arr[i];


    arr[n+1] = 0;
    ll ans = DP(1,0);

    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
