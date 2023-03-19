#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = 1e9 + 7;

ll mem[100005][102];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n + 2]{};
    for (int i = 1; i <= n; i++) cin >> a[i];


    if (a[1] != 0) mem[1][a[1]] = 1;
    else
        for (int i = 1; i <= m; i++) {
            mem[1][i] = 1;
        }

    for (int i = 2; i <= n; i++) {
        if (a[i] != 0) {
            mem[i][a[i]] = (mem[i - 1][a[i] - 1] + mem[i - 1][a[i]] + mem[i - 1][a[i] + 1]) % MOD;
        }
        else {
            for (int j = 1; j <= m; j++) {
                mem[i][j] = (mem[i - 1][j - 1] + mem[i - 1][j] + mem[i - 1][j + 1]) % MOD;
            }
        }
    }

    ll ans = 0;
    if (a[n] != 0) ans = mem[n][a[n]];
    else
        for (int i = 1; i <= m; i++)
            ans = (ans + mem[n][i]) % MOD;

    cout << ans << '\n';
}
