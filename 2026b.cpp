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

const int S = 1e5+5;
bool prime[S];

void solve() {
    ll n;
    cin>>n;
    ll a[n];
    map<ll,int> m;
    int p = 0;

    f(i,n) {
        cin>>a[i];
        m[a[i]]++;
    }
    if(n==1) vps(1);
    if(n==2) {
        pr(a[1]-a[0]);
        return;
    }

    vector<ll> v;

    ff(i,1,n) {
        v.pb(a[i]-a[0]);
        if(n&1 and i>1)
            v.pb(a[i]-a[1]);
    }

    sort(all(v));
    int S = v.size();
    int I = 0 ;
    ll ans = -1;
//    ps(asd);
//    vout(v);
    while(I<S) {
        map<ll,int> m2;
        int l = 1;
        int cnt = 0;
        f(i,n) {
            if(m2[a[i]]) continue;
            ll s =  a[i+1];

            if(m[s]) {
                m2[a[i]] = 1;
                m2[s] = 1;
                cnt+=2;
            }
        }

        f(i,n)
        cout<<m2[a[i]]<<' ';
        newl;


        if(cnt+1>=n) {
            ans = v[I];
            break;
        }
        I++;
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
