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
vector<int> v;

void solve() {
    v.clear();
    vector<int> v2;
    ll n;
    cin>>n;
    ll a[n];
    bool p = 0;
    f(i,n) {
        cin>>a[i];
        p |= a[i]>=0;
    }
    if(!p) {
        ll ans = *max_element(a,a+n);
        pr(ans);
        return;
    }

    vector<pii> pr;
    int i = 0;
    while(i<n and a[i]<=0) i++;
    while(a[n-1]<=0 and n>0) n--;

    int k = i;
    while(i<n) {
        if(a[i]<=0) {
            int l = i;
            while(i<n and a[i]<=0) {
                i++;
            }
            int r = i-1;
            pr.pb({l,r});
        } else i++;
    }

//    for(auto x : pr) cout<<x.F<<' ' <<x.S<<'\n';
    pr.pb({-1,-1});
    int I = 0 ;
    i = k;
    while(i<n) {
//            debb(i,n);
        if(i == pr[I].F) {

            if((pr[I].S - pr[I].F)%2==0) {
                ll y = a[pr[I].S+1];
                v2.back()+=y;
                i=pr[I].S+2;
            }

            else if( (pr[I].S - pr[I].F)%2==1) {
//                    v2.pb(a[pr[I].F]);
                i = pr[I].S+1;
            }
            I++;
        } else {
            v2.pb(a[i]);
            i++;
        }
    }
//    vout(v2);



    ll ans1 = 0,ans2 = 0;
    f(i,v2.size()) {
        i&1 ? ans1+=v2[i]: ans2+=v2[i];
    }
    ll ans = max(ans1,ans2);
    pr(ans);

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
// 1 8 2 -1 -3 -6 -9 -1 -3 4
// 1 5 5 2 -1 -3  4
// 1 5 1 -1 -1 -1 1

