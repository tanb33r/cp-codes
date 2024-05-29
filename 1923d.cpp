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
    ll a[n+4];
    vector<ll> pre,suf;
    pre.pb(0);
    ff(i,1,n+1) {
        cin>>a[i];
        pre.pb(pre.back() + a[i]);
    }
    ll ans[n] {};
    bool impl[n+1] {};
    bool impr[n+1] {};
    f(i,n+1)impr[i]=impl[i] = 0;
    int magic = 1;
    ff(i,2,n) {
        if(a[i-1]>a[i])  magic = 0;
        impl[i] = magic;
        if(a[i]!=a[i-1]) magic = 0;
    }
    magic = 1;
    for(int i = n; i>=0; i--) {
        if(a[i+1]>a[i]) magic = 0;
        impr[i] = magic;
        if(a[i]!=a[i+1]) magic = 0;
    }


    for(int i = n; i>0; i--) {
        if(i==n) suf.pb(a[i]);
        else suf.pb(suf.back() + a[i]);
        ans[i] = 2e9;
    }

    suf.pb(suf.back());
    reverse(all(suf));
    //    vout(suf);
    ff(i,1,n+1) {
        int l = i+1, r = n+1;
        if(impr[i]) continue;
        while(r>l) {
            int mid = (l+r)/2;
            ll slime = pre[mid]-pre[i];
//            debb(i,a[i],slime,mid,pre[mid],l,r);

            if(slime>a[i]) {
                r = mid;
                ans[i] = min(ans[i], (ll)r-i);
            } else l = mid +1;
        }
    }

    ff(i,1,n+1) {
        int l = 0, r = i;
        if(impl[i]) continue;
        while(r>l) {
            int mid = (l+r)/2;
            ll slime = suf[mid]- suf[i];
//            debb(i,a[i],slime,mid,suf[mid],l,r);
            if(slime>a[i]) {
                l = mid+1;
                ans[i] = min(ans[i], (ll)i-mid);
            } else r = mid;
        }
    }


    ff(i,1,n+1) {
        cout<<(ans[i] == 2e9?-1:ans[i])<<' ' ;
    }
    newl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
