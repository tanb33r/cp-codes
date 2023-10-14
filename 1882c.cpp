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
    vector<int> v[2];
    f(i,n) {
        cin>>a[i];
        v[0].pb(a[i]);
    }
    ll ans = 0;
    bool b = 0;
    int k =  0;
    int sz = v[0].size();
    int pos = 0;
    while(1) {
        k++;
        pos = 0;
        f(i,v[b].size()) {
            pos+=v[b][i]>0;

            if(!(i&1) and v[b][i]>=0) ans+=v[b][i];
            else                     v[!b].pb(v[b][i]);

        }
//            vout(v[b]);
//            vout(v[!b]);
//debb(pos);
        if(v[!b].size() == sz) break;
        sz = v[!b].size();
        v[b].clear();
        b^=1;

    }
    int l = 0;
//    if(v[b].size()>3) {
//        f(i,(int)v[b].size() -1) {
//            if(v[b][i]+v[b][i+1]>=0) {
//                l = i;
//                ans += v[b][i];
    ff(j,2,(int)v[b].size()) {
        if(v[b][j]>=0)
            ans+=v[b][j];
//    }
        if(v[b][0]+v[b][1]>=0)
            ans+=v[b][0]+v[b][1];

//i++;
    }
    pr(ans);


//deb(k);
//vout(v[0]);
//vout(v[1]);

//    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
