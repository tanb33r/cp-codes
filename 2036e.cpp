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
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(_VA_ARGS_)
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

vector<ll> v[100005];
ll n,m;

void query() {
    ll k;
    int a,b;
    char ch;
    cin>>k;

    ll up=0, down=n-1;
    f(i,k) {
        cin>>a>>ch>>b;

        if(ch == '>') {
            up=max(up, (ll)(upper_bound(v[a-1].begin(),v[a-1].end(), b)-v[a-1].begin()));
        } else {
            down=min(down,(ll)(lower_bound(v[a-1].begin(),v[a-1].end(), b)-v[a-1].begin()-1));
        }
    }

    ll ans=0;

    if(up<=down)
        ans=up+1;
    else
        ans=-1;

    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;


    cin>>n>>m>>t;
    ll arr[n+1][m+1],i,j;

    f(i,n)
    f(j,m)
    cin>>arr[i][j];



    f(i,m) {
        ll a=0;
        f(j,n) {
            a=(a|arr[j][i]);
            v[i].pb(a);
        }
        v[i].pb(200000000000);
    }

    while(t--)
        query();
}
