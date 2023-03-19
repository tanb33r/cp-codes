#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD                 5000011LL
#define EPS                 1e-9
#define io                  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define  arrp(v,n)          for(int I=0;I<=n;I++)cout<<v[I]<<" ";cout<<endl
#define  newl               cout<<"\n"

const int MAXN = 1e5+5;

int dp[MAXN][2];

int main() {
    io;
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        dp[1][0] = dp[1][1] = 1;
        for(int i = 2; i <= n; i++) {
            dp[i][0] = (dp[i-1][0] + dp[i-1][1]) % MOD;
            dp[i][1] = (i > k + 1 ? (dp[i-k-1][1] + dp[i-k-1][0]) % MOD : 1);

            for(int I=0; I<=n; I++)cout<<dp[I][0]<<" ";
            cout<<endl;
            for(int I=0; I<=n; I++)cout<<dp[I][1]<<" ";
            cout<<endl;
            cout<<endl;
        }
        cout << (dp[n][0] + dp[n][1]) % MOD << endl;
    }
    return 0;
}
