#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,ans=0;
        cin>>n;
        ans += n/5;
        n %= 5;
        ans += n/3;
        n %= 3;
        ans += n;
        cout<<ans<<"\n";
    }
}
