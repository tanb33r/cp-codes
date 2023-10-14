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
    vector<int> pos[n+2];
    map<int,int> m;
    f(i,n) {
        cin>>a[i];
        m[a[i]]++;
        pos[a[i]].pb(i);
    }
    f(i,n)
    if(m[a[i]]>2)
        vps(NO);

    int cnt = 0;
    vector<int> v;
    f(i,n) {
        if(m[i+1]==0) {
            v.pb(i+1);
            cnt++;
        } else if(m[i+1]==2)cnt--;

        if(cnt<0) vps(NO);
    }
    int x[n]{}, y[n]{};
    reverse(all(v));
    f(i,n) {
        if(m[i+1]==1) {
            int p = pos[i+1][0];
            x[p]=y[p]=a[p];
        }
        if(m[i+1]==2){
            int p = pos[i+1][0];
            int q = pos[i+1][1];
            x[p]=y[q]=i+1;
            x[q]=y[p]=v.back();
            v.pop_back();
        }
    }
//    if(m.size()==n)vps(NO);
    ps(YES);
    f(i,n)cout<<x[i]<<' ';newl;
    f(i,n)cout<<y[i]<<' ';newl;


//    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
