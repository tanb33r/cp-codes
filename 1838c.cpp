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

void solve() {
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    int k = 1 ;
    vector<int> v;

    f(i,n) {
        f(j,m) {
            if(k==n*m) {
                v.pb(k);
//                debb(k);
                goto A;
            }
            a[i][j]=k++;

        }
        v.pb(k);
        k++;
    }

A:
//    f(i,n) {
//        f(j,m) cout<<a[i][j]<<' ';
//        cout<<'\n';
//    }
//    cout<<'\n';
    int i = n-1;
    int j = m-1;

    while(v.size()>0) {
        a[i][j] = v.back();
        v.pop_back();
        j--;
        if(j<0) j = m-1,i--;
    }
    f(i,n) {
        if(i&1)
            fr(j,m,0) cout<<a[i][j]<<' ';
        else
            f(j,m) cout<<a[i][j]<<' ';
        cout<<'\n';
    }
    cout<<'\n';

}
int main() {
//    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
