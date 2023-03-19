#include <bits/stdc++.h>

using namespace std;
const int MAX = 55;
long long a[MAX];
int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int ans = 1;
    auto Test = [&](long long x) {
      int cnt = 0;
      for (int v : a) {
        long long u = llround(sqrtl(v + x));
        if (u * u == v + x) {
          cnt += 1;
        }
      }
      ans = max(ans, cnt);
    };
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        int diff = a[j] - a[i];
        for (int k = 1; k * k <= diff; k++) {
          if (diff % k == 0) {
            long long q = k + diff / k;
            if (q % 2 == 0) {
              q /= 2;
              if (q * q >= a[j]) {
                Test(q * q - a[j]);
              }
            }
          }
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
