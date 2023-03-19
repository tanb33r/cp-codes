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
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
const int MAX= 2e5+5;
ll a[MAX+1];
ll dp[MAX+1];
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    memset(dp,0,sizeof dp);
    int n,x;
    cin>>n;
    dp[0] = 1;
    f(i,n) {
        cin>>x;
        for(int j = MAX-x; j>=0; j--) {
            if(dp[j])
                dp[j+x]=1;
        }
    }
    int cnt = 0;
    int L = 0;
    for(int i = 1; i <= MAX; i++){
        if(dp[i]){
            L = i;
            cnt++;
        }
    }
    pr(cnt);
    for(int i = 1; i <= MAX; i++)
        if(dp[i])
            cout<<i<<(" \n")[i==L];
}
