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
const int N = 2e5+7;
int n, k;
int b[N];
int pre[N];

bool check(int mid) {
    f(i,n-mid+1) {
        if(b[i]<mid) {
            continue;
        }
        int sum = pre[i+mid]-pre[i];
        if(sum<=k) {
            return 1;
        }

    }
    return 0;
}

void solve() {
    cin>>n>>k;
    int a[n];
    int h[n];
    pre[0] = 0;
    f(i,n) {
        cin>>a[i];
        pre[i+1] = a[i]+pre[i];
    }

    f(i,n) cin>>h[i];
    b[n-1] = 1;
    for(int i = n-2; ~i; i--) {
        if(h[i]%h[i+1]==0) b[i] = b[i+1]+1;
        else b[i] = 1;
    }

    int l = 0, r = n;

    while(r - l > 1) {
        int m = (l + r) / 2;
        if(check(m)) l = m;
        else r = m;
    }
//    l += (check(l+1));
//    l += (check(l+1));
    pr(l);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
