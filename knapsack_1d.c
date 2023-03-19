void knap_1d() {

    for(int i=0; i<N; i++) {
        for(int j=B; j>=W[i]; j--) {
            dp[j] = max(dp[j], dp[j-W[i]] + P[i]);
        }
    }
}
