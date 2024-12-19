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

string s,s1,s2;
ll n,m;
ll par[500005];

vector<ll>v1;
vector<pair<ll,pair<ll,ll>>> v[11];
map<ll,ll>mp;
ll vis[500005];

ll bapKhoja(ll ss) {
    if(ss == par[ss]) return ss;
    return par[ss]=bapKhoja(par[ss]);
}

void solve() {

    ll a,b,c,l;

    ll ans=0,sum=0,temp;

    cin>>n>>m;
    for(ll i=1; i<=n; i++) par[i]=i;
    for(ll i=1; i<=m; i++) {
        cin>>a>>b>>c;
        v[b].push_back({a+b*c,{a,c}});
    }

    for(ll i=1; i<=10; i++) {
        sort(v[i].begin(),v[i].end());
        reverse(v[i].begin(),v[i].end());
    }

    for(ll i=1; i<=10; i++) {
        for(ll j=1; j<=n; j++) vis[j]=0;
        for(ll j=0; j<v[i].size(); j++) {
            pair<ll,pair<ll,ll>> a2= v[i][j];
            pair<ll,ll> A=a2.S;// starting point
            for(l = A.F; l<=A.F+i*A.S; l+=i) {
                a= bapKhoja(A.F); // parent 5
                b= bapKhoja(l); // majhkhaner kono node parent 3
                if(b<a) par[a] = b;
                else par[b]=a;
                if(vis[l]==1) break;
                vis[l]=1;
            }
        }
    }

    set<ll> st;
    for(ll i=1; i<=n; i++)
        st.insert(bapKhoja(i));
    pr(st.size());

    for(ll i=1; i<=10; i++) v[i].clear();
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
