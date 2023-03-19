#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)


typedef  long long          ll;
using namespace std;

void solve() {
    int n;
    cin>>n;
    int a[n];
    f(i,n)
    cin>>a[i];
    int i=0,j=1,k=2;
    f(i,n-2)
    for(int j=i+1,k=j+1; j<n-1; j++,k=j+1)
        if(a[i]<a[j] && a[j]>a[k]) {
            cout<<"YES\n"<<i+1<<" "<<j+1<<" "<<k+1<<"\n";
            return;
        }
    cout<<"NO\n";
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
