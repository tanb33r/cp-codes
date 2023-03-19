#include <bits/stdc++.h>
using  namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,x,zero=0,one=0;
        cin>>n;
        for (int i = 0; i < n; i++) {
            cin>>x;
            x?one++:zero++;
        }
        bool b = one>zero;

        x = (b && n/2&1?n/2+1:n/2);

        cout<<x<<"\n";
        for (int i = 0; i < x; i++) cout<<b<<" ";
        cout<<"\n";
    }
}


