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
#define  cerr               if(0)cerr
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
    int msb = 1;
    ll x = n;
    while(x) {
        x/=2;
        msb++;
    }

    while(n>3 and msb-- >3) {
        int l = 1,r = sqrt(n)+5;
        ll ans = 0;
        while(l<r) {
            int mid = (l+r)/2;
            ans = 1;
            int rec = msb;
            debb(msb,mid);
            while(--rec>0) {
                ans *= mid;
                ans += 1;
                debb(ans);
                if(ans>n) break;
            }
            if(ans<n) l = mid+1;
            else if( ans > n) r = mid;
            else {
                debb(msb,mid);
                pr("YES");
                return;
            }
        }
    }

    pr("NO");



//
//    for(ll i = 2; i*i<=n; i++) {
//        ll x = n;
//        string s;
//        while(x) {
//            if(x%i!=1)
//                break;
//            x/=i;
//        }
//
//        if(x==0) {
////                debb(i);
//            pr("YES");
//            return;
//        }
//    }

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
