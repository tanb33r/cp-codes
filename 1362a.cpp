#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        long long a,b;
        cin>>a>>b;
        if(a<b)  swap(a,b);
        int cnt=0,ans;

        while(a>b)
            b*=2,cnt++;

        if(a!=b)
            ans = -1;
        else {
            ans = cnt/3;
            cnt%=3;

            ans += cnt / 2;
            cnt%=2;

            ans += cnt;
        }
        cout<<ans<<"\n";
    }
}
