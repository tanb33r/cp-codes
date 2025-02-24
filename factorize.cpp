vector<int> get_primes(int n) {
    int d = 2;
    vector<int> ans;
    while (d * d <= n) {
        bool flag = false;
        while (n % d == 0) {
            n /= d;
            flag = true;
        }
        if (flag) ans.push_back(d);
        d++;
    }
    if (n != 1) ans.push_back(n);
    return ans;
}


const int MAXN = 1e7 + 7;
int spf[MAXN];
vector<int> primes;

void sieve(){
    for(int i=2; i < MAXN; i++) {
        if(spf[i] == 0) {
            spf[i] = i;
            primes.push_back(i);
        }
        for(int j=0; j<primes.size() && primes[j]<=spf[i] && i*primes[j] < MAXN; j++) {
            spf[i * primes[j]] = primes[j];
        }
    }
}


void factorise(int z, vector<pair<int, int>> &ps) {
    while (z > 1) {
        int p = spf[z], c = 0;
        while (spf[z] == p)
            z /= p, c++;
        ps.push_back({p, c});
    }
}
