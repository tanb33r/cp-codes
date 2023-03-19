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
