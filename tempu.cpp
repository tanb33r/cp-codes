#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, a[100005], k;
    cin >> t;
    while(t--) {
        cin >> n;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n - 1; i++) {
            if(a[i] < a[i + 1]) {
                k = (a[i + 1] - a[i] - 1) / a[i + 1] + 1;
                a[i] += (k * a[i + 1]);
                cnt++;
                cout << i + 1 << " " << k * a[i + 1] << "\n";
            }
        }
        cout << cnt << "\n";
    }

}
