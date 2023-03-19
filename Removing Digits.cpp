#include <bits/stdc++.h>

using namespace std;
const int maxN = 1e6;
const int INF = 0x3f3f3f3f;

int n, dp[maxN+1];

int main() {
    cin>>n;
    fill(dp+1, dp+n+1, INF);

    for(int i=1; i<=n; i++) {
        int d = i;
        while(d>0) {
            if(d%10)
                dp[i] = min(dp[i],dp[i-(d%10)]+1);
            d/=10;
        }
    }
    cout<<(dp[n])<<"\n";
}
