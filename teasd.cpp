#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q,number,a,b;
    cin>>n;
    int lady[n];
    for(int i=0; i<n; i++) cin>>lady[i];
    cin>>q;
    while(q--) {
        cin>>number;
        auto up = upper_bound(lady,lady+n,number) - lady;
        auto low = lower_bound(lady,lady+n,number) - lady -1;



        if(low<0) cout<<"X ";
        else cout<<lady[low]<<" ";
        if(up==n)  cout<<"X"<<endl;
        else cout<<lady[up]<<endl;
    }

}
