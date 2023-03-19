#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  in(x)              int x; cin>>x
#define  newl               cout<<"\n"
using namespace std;

void solve() {
    in(n);
    int a[n];
    f(i,n) {
        in(x);
        a[i] = abs(x);
    }
    f(i,n)
    a[i++] *= -1;
    f(i,n)
    cout<<a[i]<<" ";
    newl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
