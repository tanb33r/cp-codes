#include <bits/stdc++.h>
using namespace std;
main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> s >> n;
		string ans(n, '.');
		int a[n];
		for (int &i : a) cin >> i;
		char z = 'z';
		while (z >= 'a') {
			vector<int> v;
			for (int i = 0; i < n; ++i) {
				if (ans[i] != '.') continue;
				int tmp = 0;
				for (int j = 0; j < n; ++j)
					if (ans[j] != '.') tmp += abs(i - j);
				if (tmp == a[i]) v.push_back(i);
			}
			while (count(s.begin(), s.end(), z) < v.size()) --z;
			for (int i : v) ans[i] = z;
			--z;
		}
		cout << ans << '\n';
	}
}
