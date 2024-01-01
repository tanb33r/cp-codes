#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb                 emplace_back
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  len(s)             (int)s.size()
#define  deb(x)             cerr<<__LINE__<<"line  "<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int, int> pii;
const int MAX = 2e5 + 5;
const int N = 1000005;
int a[N],freq[N],cnt[N];
void solve() {
    int n,m;
    cin>>n>>m;

    for(int i = 1; i<=n; i++) {
        cin>>a[i];
        if(a[i]>m)continue;
        freq[a[i]]++;
    }

    for(int i = 1; i<=m; i++) {
        if(!freq[i])continue;
        for(int j = i; j<=m; j+=i)
            cnt[j] += freq[i];
    }
    int L=0,cc=-1;
    for(int i = 1; i <= m; i++) {
        if(cnt[i] > cc) {
            cc = cnt[i];
            L = i;
        }
    }
    cout<<L<<' '<<cc<<'\n';
    for(int i = 1; i <= n; i++) {
        if(L%a[i]==0) cout<<i<<' ';
    }
    newl;
}
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t = 1;
//    cin>>t;
    while(t--)
        solve();
}

