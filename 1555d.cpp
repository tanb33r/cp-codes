#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    string s;

    cin >> n >> m >> s;

    int cnt[4][4][n + 2];
    memset(cnt, 0, sizeof cnt);

    for (int i = 0; i < n; i++) {
        cnt[s[i] - 'a'][i % 3][i] = 1;
    }
    for (char c = 'a'; c <= 'c'; c++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 1; j < n; j++) {
                cnt[c - 'a'][i][j] += cnt[c - 'a'][i][j - 1];
            }
        }
    }

    while (m--) {
        int l, r;

        cin >> l >> r;
        l--, r--;

        if (r - l == 0) {
            cout << "0";
        } else if (r - l == 1) {
            cout << (s[l] == s[r]);
        } else if (r - l == 2) {
            set<char> st = {s[l], s[l + 1], s[l + 2]};
            cout << 3 - (int)st.size();
        } else {
            int ans = INT_MAX;
            vector<char> perm = {'a', 'b', 'c'};

            do {
                int total = 0;

                for (int i = 0; i < 3; i++) {
                    int cur = cnt[perm[i] - 'a'][(l + i) % 3][r];
                    if (l > 0) {
                        cur -= cnt[perm[i] - 'a'][(l + i) % 3][l - 1];
                    }
                    int diff = r - l + 1;
                    int cur_cnt = diff / 3;
                    if (diff % 3 > i) {
                        cur_cnt++;
                    }
                    total += cur_cnt - cur;
                }

                ans = min(ans, total);
            } while (next_permutation(perm.begin(), perm.end()));

            cout << ans;
        }

        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test = 1;
    //cin >> test;
    while (test--) {
        solve();
    }
}
