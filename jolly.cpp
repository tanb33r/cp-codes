#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, ar[3100];
    while(scanf("%d", &n) == 1) {
        int cnt[3100] = {0};
        for(int i = 0; i < n; i++) cin>>ar[i];
        for(int i = 0; i < n - 1; i++) {
            int x = abs(ar[i + 1] - ar[i]);
            cnt[x] = 1;
            // count 1 kore dibi
        }

        bool flag = 1;
        for(int i = 1; i < n; i++)
            if(cnt[i] == 0) {
                flag = 0;
                break;
            }

        printf((flag)?"Jolly\n":"Not jolly\n");
    }
}

