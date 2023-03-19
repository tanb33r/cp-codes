#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,x;
    cin>>n>>x;
    float a[n];
    float sum=1;
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<x; i++) sum*=(1-a[i]);
    float ans = 1-sum;
    cout<<fixed<<setprecision(19);
    cout<<(ans)<<'\n';
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
/*
1
20 3
.9 .9 .9 .1 .1 .1 .1 .1 .1 .1 .1 .1 .1 .1 .1 .1 .1 .1 .1 .1


4 3
.2 .2 .3 .6
*/
