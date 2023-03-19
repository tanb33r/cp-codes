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

const int inf = 1234567;

int dp[102][52][2];
string s;
int L, K;

int sol(int i,int k,int b) {

    if(k<0) return -inf;
    if(i==L){
        if(k) return -inf;
        else return 0;}
    int &x = dp[i][k][b];
    if(x==-inf) {
        int ans = sol(i,k-2,b);
        if(s[i]=='F') {
            if(b) ans = max({ans,sol(i+1,k,b)+1,sol(i+1,k-1,b^1)});
            else  ans = max({ans,sol(i+1,k,b)-1,sol(i+1,k-1,b^1)});
        } else {
            if(b) ans = max({ans,sol(i+1,k,b^1),sol(i+1,k-1,b)+1});
            else  ans = max({ans,sol(i+1,k,b^1),sol(i+1,k-1,b)-1});
        }
        x = ans;
    }
    return x;

}




int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>s>>K;
    L = s.size();
    for(int i = 0, j, k; i <= 100; ++i)
        for(j = 0; j <= K; ++j)
            for(k = 0; k < 2; ++k)
                dp[i][j][k] = -inf;

    int maxR = sol(0, K, 1);

    reverse(all(s));

    for(int i = 0, j, k; i <= 100; ++i)
        for(j = 0; j <= K; ++j)
            for(k = 0; k < 2; ++k)
                dp[i][j][k] = -inf;
    int maxL = sol(0, K, 1);
    pr(max(maxR, maxL));
}
