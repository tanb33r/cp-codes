#include<bits/stdc++.h>
using namespace std;

int count(int l, int r) {
    if (r < l)  return 0;
    return r-l+1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d;
    cin>>a>>b>>c>>d;

    long long ans = 0;
    for (int s = a+b; s<=b+c; s++)
        ans += 1LL*count(max(a, s-c), min(b, s-b))*count(c, min(d, s-1));

    cout<<ans<<endl;
}

