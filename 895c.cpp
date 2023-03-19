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
using namespace std;

int mask[72];
ll f[2][72];
ll dp[2][1 << 20];
const int mod = 1e9+7;

bool prime(int x) {
    for (int i = 2; i*i <= x; i++)
        if (x%i == 0)
            return 0;
    return 1;
}
void solve() {
    f(i,72) f[0][i]=1;
    int cnt = 0;
    ff(i,2,72) {
        if(prime(i)) {
            ff(j,1,72) {
                int x = j ;
                while(x%i==0) {
                    x/=i;
                    mask[j]^=(1<<cnt);
                }
            }
            cnt++;
        }
    }
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    solve();
    int n;
    cin>>n;
    f(i,n) {
        int x = II;
        f[0][x]=f[1][x] = (f[0][x]+f[1][x] )%mod;
    }
    dp[0][0] = 1;
    f(i,71) {
        int nxt = (i+1)&1;
        int cur = (i)&1;
        f(msk,(1<<20)) {

            dp[nxt][msk^mask[i]] = dp[nxt][msk^mask[i]] + dp[cur][msk] * f[1][i];
            dp[nxt][msk] = dp[nxt][msk] + dp[cur][msk] * f[0][i];
            if (dp[nxt][msk^mask[i]] >= mod) dp[nxt][msk^mask[i]] -= mod;
            if (dp[nxt][msk] >= mod) dp[nxt][msk] -= mod;
        }
            for (int msk = 0; msk < (1<<20); msk++)
                dp[cur][msk] = 0;
    }
        cout << (dp[1][0] - 1 + mod)%mod << endl;

}
