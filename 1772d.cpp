#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define ps(x)              cout<<#x<<"\n"
#define pb                 push_back
#define eb(x)              emplace_back(x)
#define pr(x)              cout<<x<<"\n"
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
ll a[N];
ll b[N];
ll n;


bool bruh(ll x) {
    f(i,n)
    b[i] = abs(a[i]-x);

    f(i,n-1)
    if(b[i]>b[i+1])
        return 0;
    return 1;
}

void solve() {
    ll n;
    cin >> n;
    int a[n];
    for(int j = 0; j < n; j++)
        cin >> a[j];
    int mn = 0, mx = 1e9;
    f(j,n-1) {
        int x = a[j];
        int y = a[j + 1];
        int midL = (x+y)/2;
        int midR = (x+y+1)/2;
        if(x < y) mx = min(mx, midL);
        if(x > y) mn = max(mn, midR);
    }

    pr(((mn <= mx)?mn:-1));
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
