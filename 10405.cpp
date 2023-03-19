#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
string s,s2;
int dp[1001][1001];
int lcs() {
    ff(i,0,s.size()+1)
    ff(j,0,s2.size()+1) {
        if(i==0 || j==0) {
            dp[i][j]=0;
            continue;
        }
        if (s[i-1] == s2[j-1])      dp[i][j] = dp[i-1][j-1]+1;
        else                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    }
    return dp[s.size()][s2.size()];
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
//    freopen("input.in.c","r",stdin);
//    freopen("outputf.in","w",stdout);
    while(getline(cin,s)) {
        getline(cin,s2);
        cout<<lcs()<<"\n";
    }
}
