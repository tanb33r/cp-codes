#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define ps(x)              cout<<#x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
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
    int z[n];
    ll ans=0;

    vector<int>same;
    f(i,n) {
        cin>>a[i];
        z[i] = -1;
    }
    f(i,n-1) {
        if(a[i] == a[i+1])
            same.pb(i);
        else {
            z[i] = i+1;
            while(same.size()) {
                z[same.back()] = i+1;
                same.pop_back();
            }
        }
    }

    int q;
    cin>>q;
    while(q--) {
        int l, r ;
        cin>>l>>r;
        l--,r--;
        int i = l ;
        if(z[i]<=r and z[i]>=l)
            cout<<i+1<<' '<<z[i]+1<<'\n';
        else
            cout<<-1<<' '<<-1<<'\n';
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
