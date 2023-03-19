#include<iostream>
using namespace std;

int add(int x, int y) {
    return ((x + y) % MOD + MOD) % MOD;
}

int mul(int x, int y) {
    return x * 1ll * y % MOD;
}

int binpow(int x, int y) {
    int z = 1;
    while(y) {
        if(y % 2 == 1) z = mul(z, x);
        x = mul(x, x);
        y /= 2;
    }
    return z;
}

int inv(int x) {
    return binpow(x, MOD - 2);
}

int divide(int x, int y) {
    return mul(x, inv(y));
}
int gcdExtended(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}
int modInverse(int a, int m) {
    int x, y;
    int g = gcdExtended(a, m, &x, &y);
    if (g != 1)            return -1;
    else                   return (x % m + m) % m;
    // to make negative values positive
}

int main() {
    int a = 3, b = 5, m = 1000000007;
    cout << (a * (modInverse(b, m))) % m;
}



