#include <bits/stdc++.h>
using namespace std;
int tri(int a) {
    if(a == 1) return 0;
    if(a == 2) return 1;
    if(a == 3) return 2;
    return 3*(tri(a-1)+tri(a-2)+tri(a-3));
}
int main() {
    int x;
    cin>>x;
    int ans[100000];
    ans[1] = 1,ans[1] = 2,ans[2] = 3;
    for(int i = 4; i<100000; i++) {
        ans[i] = 3*(ans[i-1]+ans[i-2]+ans[i-3]);
    }
    cout<<ans[x]<<endl;
}

