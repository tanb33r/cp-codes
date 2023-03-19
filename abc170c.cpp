#include<bits/stdc++.h>
using namespace std;
int main() {
    int x,n;
    cin>>x>>n;

    vector<int>v(n);
    map<int,int> m ;

    for(int i=0; i<n; ++i) {
        cin>>v[i];
        m[v[i]]++;
    }
    int z = 0;
    if(n==0) {
        cout<<x;
        return 0;
    }
    while(1) {
        if(m[x-z] == 0) {
            cout<<x-z;
            break;
        }
        if(m[x+z] == 0) {
            cout<<x+z;
            break;
        }
        z++;
    }
}

