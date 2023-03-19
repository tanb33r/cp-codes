


N items,
profit Pi
weight Wi

for(int i=0; i<N; i++) {
    for(int j=B; j>=0; j--) {
        if(j - W[i] >= 0) {
            dp[j] = max(dp[j], dp[j-W[i]] + P[i]);
        }
    }
}
