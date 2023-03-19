
#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
using namespace std;

template<class T> T max(T a, T b, T c) {
    return max(a, max(b, c));
}

int nextInt() {
    int x = 0, p = 1;
    char c;
    do {
        c = getchar();
    } while (c <= 32);
    if (c == '-') {
        p = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * p;
}

const int maxn = 111111;

int n;
map<int, int> m;
vector<pair<int, int> > v;
long long f[maxn];

int main() {
    //freopen("input.txt", "r", stdin);
    cin>>n;
    while (n--) {
        int x;
        cin>>x;
        m[x]++;
    }
//    map<int, int>::iterator it;
    for (auto it:m) {
        v.push_back(make_pair(it.first, it.second));
    }
    f(i,(int)v.size()) {
        int pr = i - 1;
        while (pr >= 0 && v[pr].first + 1 == v[i].first)
            pr--;
        if (pr == -1)
            f[i] = 1LL * v[i].first * v[i].second;
        else
            f[i] = f[pr] + 1LL * v[i].first * v[i].second;
        if (i != 0)
            f[i] = max(f[i], f[i - 1]);
    }
    cout << f[(int)v.size() - 1] << '\n';
}
