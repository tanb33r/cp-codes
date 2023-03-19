#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int wt[] = {7, 12, 3,2,5} ;
    double val[] =  {173,126,48,17,53};
    double W = 10;
    double dp[n + 1][(int)W + 1];
    memset(dp,0,sizeof(dp));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= W; j++) {
            if (wt[i - 1] <= j)
                dp[i][j] = val[i-1] + dp[i-1][j-wt[i-1]];
            dp[i][j] = max(dp[i][j],dp[i-1][j]);
        }

    cout<<dp[n][(int)W]<<endl;

}


