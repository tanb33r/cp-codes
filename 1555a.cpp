#include <bits/stdc++.h>
using namespace std;
void solve() {

    long long n ;
    cin>>n;
    long long time = (n/6)*15;
    long long slice= (n/6)*6;
    if(n>slice) {
        if(n-slice<=2) time+=5;
        else if(n-slice<=4) time+=10;
        else if(n-slice<=5) time+=15;
    }
    time = max(15ll,time);
    cout<<(time)<<"\n";
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
