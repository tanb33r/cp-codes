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
    ll a[n];
    f(i,n-1) {
        cin>>a[i];
    }
//    if(n==2) {
//        hmm(a[0]<=2);
//        return;
//    }
    vector<ll> v,mi;
    map<ll,int> m;
    f(i,n-2) {
        v.pb(a[i+1]-a[i]);
    }
    sort(all(v));
    ll dub = 0;
    ll boro = 0;
    f(i,v.size()) {
        m[v[i]]++;
        if(m[v[i]]==2) dub = v[i];
        if(v[i]>n) boro = max(boro,v[i]);

    }
    ff(i,1,n+1) {
        if(m[i]==0)
            mi.pb(i);
    }
//    vout(v);
//    ps(mi);
//    vout(mi);
//    pr("");


    if(dub and boro>n) {
        ps(NO);
        return;
    }
    ll x = dub+boro;
//    debb(boro,dub,x);

//    if(mi.size()>=2) {
    if(mi.size() == 2) {
        if(mi[0]+mi[1]==a[0]) {
            ps(YES);
            return;
        }
        if(mi[0]==a[0] and mi[1]<=n ) {
            ps(YES);
            return;
        }
        if(mi[1]==a[0] and mi[0]<=n ) {
            ps(YES);
            return;
        }
    } else if(mi.size()==3) {
        if(mi[0]+mi[1]==x and mi[2] == a[0]) {
            ps(YES);
            return;
        }
        if(mi[0]+mi[2]==x and mi[1] == a[0]) {
            ps(YES);
            return;
        }
        if(mi[1]+mi[2]==x and mi[0] == a[0]) {
            ps(YES);
            return;
        }
    }
    ps(NO);


}
int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
