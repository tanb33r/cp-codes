
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
ll SUM(ll n ) {
    return (n*(n+1))/2;
}

void solve() {
    ll n;
    cin>>n;
    int a[n+2];
    int b[n+2];
    int pref[n+2] {};
    map<int,int> mp;
    f(i,n) {
        cin>>a[i+1];
//        b[i+1]=a[i+1];
        mp[a[i+1]]=i+1;
    }
    int l = 1;
    for(auto x : mp) {
        a[x.S] = l++;
    }
    f(i,n) {
        b[i+1] = a[i+1];
        pref[i+1] = pref[i]+b[i+1];
    }
    sort(b+1,b+n+1);
    f(i,n) cout<<a[i+1]<<' ';cout<<'\n';
    f(i,n) cout<<b[i+1]<<' ';cout<<'\n';
//    f(i,n)
//    pref[i+1] = pref[i]+b[i+1];
//
    int cnt = 0;
    int cnte = 0;
    ll sum = 0;
    ll ind = 1;
    ll ans = 0;
    ff(i,1,n+1) {
        cnt+=(a[i]!=b[i]);
        if(!cnt) {
            ind=i+1;
            continue;
        }
        cnte++;
        ll shldb = SUM(i)-SUM(ind-1);
        sum+=a[i];
        debb(sum,shldb,i);
        debb(cnte,i-ind+1,ans);
        debb(i-ind+1 == cnte);
        debb(shldb == sum);
        if(i-ind+1 == cnte and shldb == sum) {
            cnt = cnte = sum = 0;
            ans+=i-ind;
            ind = i+1;
        }
    }
    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
