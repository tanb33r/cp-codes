#include <bits/stdc++.h>
using namespace std;




bool isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> primes;

    for (int i = 1; i <= n; i++) {
        if (isPrime(n))
            primes.push_back(i);
    }
}

