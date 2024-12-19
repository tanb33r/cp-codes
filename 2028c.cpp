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

ll arr[200005];
ll crr[200005];
ll brr[200005];

void solve() {
    ll l,r,i,j,k,a,b,c,n,m;

    cin>>n>>m>>a;
    ll sum=0;
    for(i=1,j=0; i<=n; i++) {
        cin>>arr[i];
        sum+= arr[i];
        brr[i]=brr[i-1]+arr[i];
        if(j!=m&&sum>=a) {
            j++;
            sum=0;
            crr[j]=i;
        }
    }
    ll ans=-1;
    if(j==m) {
        ans=max(sum, ans);
    }
    sum=0;
    for(i=n,j=0; i>=1; i--) {
        sum+= arr[i];
        if(j!=m and sum>=a) {
            j++;
            sum=0;
            b=crr[m-j];
            ans=max(ans,brr[i-1]-brr[b]);
            // cout<<" "<<i<<" "<<ans<<" "<<b<<" "<<brr[b+1]<<" "<<brr[i-1]<<" "<<j<<endl;
        }
    }
    if(j==m) {
        ans=max(ans,sum);
    }

    pr(ans);

    for(i=1; i<=n; i++) crr[i]=0;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
