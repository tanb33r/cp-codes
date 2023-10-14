



#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    int n,W;
    cin>>n>>W;
    int wt[n],val[n];
    for(int i =0 ; i<n; i++) {
        cin>>wt[i]>>val[i];
    }

    ll dp[n + 1][W + 1];
    memset(dp,0,sizeof(dp));


    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= W; j++) {
            if (wt[i - 1] <= j)
                dp[i][j] = val[i-1] + dp[i-1][j-wt[i-1]];
            dp[i][j] = max(dp[i][j],dp[i-1][j]);
        }

    cout<<endl<<dp[n][W]<<endl;

}
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n = 5;
//    cin>>n;
    int wt[] = {7, 12, 3,2,5} ;
    double val[] =  {173,126,48,17,53.55};
//    for(int i =0 ; i<n; i++) {
//        cin>>val[i]
//    }
    double W = 10;
    double dp[n + 1][(int)W + 1];
    memset(dp,0,sizeof(dp));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= W; j++) {
            if (wt[i - 1] <= j)
                dp[i][j] = val[i-1] + dp[i-1][j-wt[i-1]];
            dp[i][j] = max(dp[i][j],dp[i-1][j]);
        }

    for (int i = 0; i <= W; i++)
        cout<<i<<"\t";
    cout<<endl;
    for (int i = 1; i <= n; i++) {
        cout<<val[i-1]<<"\t";
        for (int j = 1; j <= W; j++)
            cout<<dp[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl<<dp[n][(int)W]<<endl;

}

