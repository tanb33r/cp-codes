#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ ll TEMP; cin>>TEMP; TEMP; })
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
int mod = 1e9+7;
ll cnt(string a, string b) {
    ll m = a.length();
    ll n = b.length();

    ll DP[m + 1][n + 1] = { { 0 } };
    for (int i = 0; i <= n; ++i)
        DP[0][i] = 0;

    for (int i = 0; i <= m; ++i)
        DP[i][0] = 1;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i - 1] == b[j - 1])
                DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j])%mod;

            else
                DP[i][j] = DP[i - 1][j];
        }
    }

    return DP[m][n]%mod;
}

int main() {
    string a = "chchokudai";
    string b = "chokudai";
    cin>>a;
    pr(cnt(a, b));

}

