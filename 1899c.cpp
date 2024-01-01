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
ll fun(vector<int> &a) {
//    vout(a);
    ll ans = a[0];
    int k = 0;
    int i = 0;
    ll res = a[0];
    while(i<sz(a)-1) {
        if(abs(a[i]%2) != abs(a[i+1]%2)) {
            while(abs(a[i]%2) != abs(a[i+1]%2)) {
                if(res<0) res = 0;
                res += a[i+1];
                i++;
                ans = max(ans,res);
            }
        } else {
            ans = max(ans,res);
            res = a[i+1];
            ans = max(ans,res);
            i++;
        }
    }
    return ans;
}

void solve() {
    ll n;
    cin>>n;
    vector<int> a;
    f(i,n)    {
        int x = II;
        a.pb(x);
    }

    vector<int> b = a;
    reverse(all(b));
    a.pb(a.back());
    b.pb(b.back());
    ll ans = max(fun(a),fun(b));
    pr(ans);

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
