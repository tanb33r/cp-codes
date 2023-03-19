
ll mod= 998244353;
ll fact[1004];
void factt() {
    fact[0]=1;
    fact[1]=1;
    ff(i,1,1004) {
        fact[i] = (fact[i-1]*i)%mod;
    }

}
