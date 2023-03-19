#include <bits/stdc++.h>
using namespace std;
typedef  long long          ll;

int main() {
    int h, m, s, c;
    while(scanf("%2d%2d%2d%2d", &h, &m, &s, &c) == 4) {
        ll sum = c*10+s*1000LL+m*60000LL+h*3600000LL;
        ll ans = (sum*100)/864;
        printf("%07lld\n", ans);
    }
    return 0;
}
