#include <bits/stdc++.h>
using namespace std;

const int mx = 1e7+7;
int a[mx], p[mx];

void prime_factor() {
	for (int i = 2; i < mx; i++) {
		if (p[i] == 0) {
			for (int j = i; j < mx; j += i) p[j] = i;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	prime_factor();


}
