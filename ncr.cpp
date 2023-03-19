ll C[5001][5001];

const int mod = 998244353;
void calc() {
    for(int i=0; i<5001; i++) {
        C[i][0]=C[i][i]=1;
        for(int j=1; j<i; j++)
            C[i][j]=(C[i-1][j-1]+C[i-1][j])%mod;
    }
}
