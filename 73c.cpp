#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
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
typedef pair<int,int> pii;


string s;
ll edge[26][26],K,d[101][101][27];
ll dp(int i,int k,int c) {
    if(i==s.size())            return 0;
    if(d[i][k][c]!=-1)  return d[i][k][c];
    ll ans = dp(i+1,k,s[i]-'a') + (i>0)*edge[c][s[i]-'a'];
    if(k<K)
        f(j,26)
        if(j!=s[i]-'a')
            ans =max(ans, dp(i+1,k+1,j) + (i>0)*edge[c][j]);

    return d[i][k][c]=ans;

}
void solve() {
    int m;
    cin>>s>>K>>m;
    f(i,m) {
        char u,v;
        int c;
        cin>>u>>v>>c;
        edge[u-'a'][v-'a']=c;
    }

    memset(d,-1,sizeof d);
    pr(dp(0,0,0));

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

