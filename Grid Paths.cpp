#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxN = 1002;
const ll MOD = 1e9+7;

int n;
char c[maxN][maxN];
ll dp[maxN][maxN];


int main() {
    cin>>n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin>>c[i][j];

    dp[1][1]= c[1][1]=='.';

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) {
            if(c[i][j]=='.') {
                if(c[i-1][j] == '.') dp[i][j] += dp[i-1][j];
                if(c[i][j-1] == '.') dp[i][j] += dp[i][j-1];
                dp[i][j]%=MOD;
            }
        }
   cout<<(dp[n][n])<<endl;
}
