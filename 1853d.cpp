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

void solve() {
    ll n;
    cin>>n;
    int a[n];
    int res[n] {};
    vector<pii> p;
    f(i,n) {
        cin>>a[i];
        p.pb({a[i],i});
    }
    sort(rall(p));
    int mx =  *max_element(a,a+n);
    int z =  count(a,a+n,0);
    if(mx>n-z) {
        ps(NO);
        return;
    }
//    if(n&1 and p[n/2].F==p[n/2+1].F) {
//        ps(NO);
//        return;
//    }
    ps(YES);
    int i = 0;
    int j = n-1;
    int val = 10000;
//    while(i<n and p[i].F == mx) res[p[i].S] = val, i++;
//    while(j>=0 and p[j].F == 0)  res[p[j].S] = -val, j--;
//    --val;
    for(; j>=i; i++,j--,val--) {
        int tmp1  = p[i].F;
        int tmp2  = p[j].F;
        int i2 = i;
        if(n-tmp1 > tmp2) {
            if(i2!=j)
                while(j>=0 and p[j].F == tmp2)  res[p[j].S] = -val, j--;
            val--;
            while(i<n and p[i].F == tmp1) res[p[i].S] = val, i++;
        } else {
//            debb(tmp1,tmp2,i,j);
            while(i<n and p[i].F == tmp1) res[p[i].S] = val, i++;
            if(n-tmp1 != tmp2 or true) val--;
            if(i2!=j)
                while(j>=0 and p[j].F == tmp2)  res[p[j].S] = -val, j--;
        }
    }

    f(i,n)
    cout<<res[i]<<' ';
    cout<<'\n';
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
