
#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n ;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0 ; i<n; i++) {
        cin>>a[i];
    }
    int k = 0;



    int ans = 0;

    for(int i=0 ; i<n; i++) {
        for(int j=i+1 ; j<n; j++) {
            if(__gcd(b[i],b[j]*2)>1)
                ans++;
        }
    }

//
//    for(int i=0 ; i<n; i++) {
//        cout<<b[i]<<' ';
//    }
    cout<<ans<<endl;

}


int main() {
    int t=1;
    cin>>t;
    while(t--)
        solve();

}
