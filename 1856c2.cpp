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
int dp[1005][2];
int a[1002];
map<vector<int>,int> mem;
ll res(int i, int c, int k,int target) {
    if(i==-1 or k==0) return target;

    vector<int> v = {i,c,k,target};

    if(mem[v]) return mem[v];
    if(a[i]>target) return a[i];
//case 1
    int cost = (target+1)-a[i];
    ll ans1 = 0;
    ll ans2 = 0;
    if(cost<=k) {
        ans1 = res(i-1,0, k - cost,target+1);
    }
    if(i>0 and a[i-1]>=a[i]) {
        int cost2 = a[i-1] - a[i];
        if(cost2<=k)
            ans2 = res(i-1,1, k - cost2,a[i-1]);
    }

    return mem[v] = max(ans1,ans2);
}

void solve() {
    ll n,k;
    cin>>n>>k;
    int mx = 0;
    f(i,n) {
        cin>>a[i];
        mx = max(mx,a[i]);
    }
    int j = n-1;
    ll ans=mx;

    while(j>0) {
        mem.clear();
//        if(j>1 and a[j-1]>a[j]) {
//            j--;
//            continue;
//        }
//ll res(int i, int c, int k,int temp,int MX) {
        ll var = res(j-1,0,k,a[j]);
        ll var2 = res(j-1,1,k,a[j]);
//        debb(var,var2);
//        debb(j-1,0,k,a[j],mx);
        ans = max({ans,var,var2});
        j--;
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

