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


long long work (long long x, long long y, long long z) {
    long long res=0;
    if (y > x && y > z) {
        res = max(x + y + z, 3 * abs(z - x));
        //res = max(res, work(y-x, y-x, z, depth + 1));
        //res = max(res, work(x, y-z, y-z, depth + 1));
        res = max({res, 3 * max(y - x, z), 3 * max(y - z, x)});
    } else {
        res = 3 * max(x, z);
    }
//    deb(res);
    return res;
}

void solve() {
    ll n;
    cin>>n;
    ll a[n+2] {};
    ll b[n+2] {};
    ll c[n+2] {};

    if(n==2) {
        ll x, y;
        cin>>x>>y;
        ll ans =max(x+y, abs(x-y)*2);
        return void(pr(ans));
    }
    ff(i,1,n+1) cin>>a[i];
    if(n==3)
        return void(pr(work(a[0+1], a[1+1], a[2+1])));

    pr(*max_element(a,a+n+2)*n);

//ps(a);
//f(i,n+2)cout<<a[i]<<'\t';
//newl;
//ps(b);
//f(i,n+2)cout<<b[i]<<'\t';
//newl;
//ps(c);
//f(i,n+2)cout<<c[i]<<'\t';
//newl;


//    ll mx = accumulate(a,a+n+2,0ll);
//
//    ff(i,1,n+1) {
//        mx = max(mx,a[i]+b[i+1]+c[i-1]);
//    }
//
//
//
//    pr(mx);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
