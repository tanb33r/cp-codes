#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a,k)            for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"Alice":"Bob")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
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

int dp[101][101][2][2];

typedef pair<int,int> pii;
const int MAX = 2e5+5;

int d(int o, int e, bool win, bool alice) {

    if(o==0 and e==0)
        return win;

    if(dp[o][e][win][alice]!=-1)
        return dp[o][e][win][alice];


    if(o==0) return dp[o][e][win][alice] = d(o,e-1, win, !alice);
    if(e==0)
        if(alice)
            return dp[o][e][win][alice] = d(o-1,e, !win, !alice);
        else
            return dp[o][e][win][alice] = d(o-1,e, win, !alice);

    if(alice) {
        int ans1 = d(o-1,e,!win, !alice);
        int ans2 = d(o,e-1,win, !alice);
        return dp[o][e][win][alice] = max(ans1,ans2);
    } else {
        int ans1 = d(o-1,e,win, !alice);
        int ans2 = d(o,e-1,win, !alice);
        return dp[o][e][win][alice] = min(ans1,ans2);
    }
}



void solve() {

    int n;
    cin>>n;
    int a[n+1];
    int odd = 0;
    int even = 0;
    for(int i=0 ; i<n ; i++) {
        cin>>a[i];
        (a[i]%2==0)?even++:odd++;
    }

    for(int i=0 ; i<101 ; i++) {
        for(int j=0 ; j<101 ; j++) {
            for(int k=0 ; k<2 ; k++) {
                for(int l=0 ; l<2 ; l++) {
                    dp[i][j][k][l] = -1;
                }
            }
        }
    }
    hmm(d(odd, even, 1, 1));

}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
