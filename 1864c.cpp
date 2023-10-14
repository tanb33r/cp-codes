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

map<int,int>m;
bool isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)return 0;
    }
    return 1;
}

int biggest(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i+=2) {
        if (n % i == 0 and (n/i)%2==0) return n/i;
    }
    return 1;
}
int biggest3(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return n/i;
    }
    return 1;
}

int biggest2(int n) {
    if (n < 2) return 0;
    for (int i = sqrt(n); i>1; i--) {
        if (n % i == 0 and m[i]<2)return i;
    }
    return 1;
}

void solve() {
    m.clear();
    ll n;
    cin>>n;
    vector<int> v;
    v.pb(n);
    int p;
    for(int i=0; ; i++)
        if(cbit(n,i)) {
            if (n == (1 << i)) {
                p = i;
                break;
            }
            n -= (1 << i);
            v.pb(n);
        }

    while(p>0) {
        n -= (1 << (p - 1));
        v.pb(n);
        --p;
    }

    pr(v.size());
    vout(v);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
