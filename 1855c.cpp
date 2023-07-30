#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            f(I,(v).size())cout<<v[I]<<" ";cout<<"\n"
#define  AI(a,n)            f(I,n)a[I]=II;
#define  AO(a,n)            f(I,n)cout<<a[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  vpr(x)             return void(pr(x))
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr

using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

typedef pair<int,int> pii;
const int MAX = 2e5+5;
//int solve2(vector<int> v,n) {
//
//
//
//
//
//}
void solve() {
    ll n;
    cin>>n;
    vector<int> a(n);
//    ll ans = 0;
    int cnt = 0;
    int mx = -21;
    int mn = 21;
    int mxi = 21;
    int mni = 21;
    f(i,n) {
        cin>>a[i];
        if(a[i]>mx) {
            mx = max(mx,a[i]);
            mxi=i;
        }
        if(a[i]<mn) {
            mn = min(mn,a[i]);
            mni=i;
        }

    }
    if(is_sorted(all(a))) {
        pr(0);
        return;
    }

    vector<pii>ans;
    if(mx>0) {
        while(mx<20) mx+=mx,ans.pb({mxi+1,mxi+1});

        while(a[0]<20) a[0]+=mx,ans.pb({1,mxi+1});

        for(int l=1; l<n; l++)
            while(a[l]<a[l-1]) {
                a[l]+=a[l-1];
                ans.pb({l+1,l});
            }
    } else {
        while(mn>-20) mn+=mn,ans.pb({mni+1,mni+1});
        while(a[n-1]>-20) a[n-1]+=mn,ans.pb({n,mni+1});

        for(int l=n-2; l>=0; l--)
            while(a[l]>a[l+1]) {
                a[l]+=a[l+1];
                ans.pb({l+1,l+2});
            }
    }
    pr(ans.size());
    for(auto x:ans) {
        cout<<x.F<<' '<<x.S<<'\n';
    }
//    debb(is_sorted(all(a)));
//    vout(a);
}

int main() {
//    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

//7
//1 9 3 -4 -3 -2 -1
//
//
//
//20
//-15 -17 -13 8 14 -13 10 -4 11 -4 -16 -6 15 -4 -2 7  -9 5  -5 17
//    1    2    3 4 5   6  7  8  9  10  11 12 13 14 15 16 17 18 19 20
