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
#define pii                pair<long long,long long>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(VA_ARGS)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
const int mod = 998244353;
const int N = 1e5+7;

ll arr[300005];
ll crr[300005];
ll brr[300005];
ll drr[300005];
vector<ll>graph[300005];
ll n,m,k;

void dfs(ll src, ll par,ll lvl){
    ll i,j,a,b;
    brr[src]=lvl;
    for(i=0;i<graph[src].size();i++){
        a=graph[src][i];
        if(arr[src]==a){
            continue;
        }
        dfs(a,src,lvl+1);
    }
}
vector<pii>v;

void solve() {
    ll l,r,i,j,a,b,c;

    cin>>n;

    for(i=2; i<=n; i++) {
        cin>>arr[i];
        graph[i].push_back(arr[i]);
        graph[arr[i]].push_back(i);
    }
    dfs(1,-1,1);

    for(i=1;i<=n;i++){
        v.push_back({brr[i],i});
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    for(i=0;i<v.size();i++){
        ll src=v[i].second;
        ll lvl = v[i].first;
        ll cnt=0;
        for(j=0;j<graph[src].size();j++){
            a=graph[src][j];
            if(a==arr[src]) continue;
            cnt=(crr[a]+cnt)%mod;
        }
        if(src!=1) crr[src]=((drr[lvl+1]-cnt)+1+mod)%mod;
        else crr[src] = (cnt+1)%mod;
        drr[lvl]=(drr[lvl]+crr[src])%mod;
    }

    cout<<crr[1]<<'\n';

    v.clear();
    for(i=0;i<=n;i++){
        graph[i].clear();
        crr[i]=0;
        drr[i]=0;
        brr[i]=0;
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
