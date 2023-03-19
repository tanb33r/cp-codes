#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll test;
    cin>>test;
    while(test--) {
        ll n;
        cin>>n;
        ll arr[n+1],id;
        for(ll i=1; i<=n; ++i) {
            ll x;
            cin>>x;
            if(x == i)id=i;
            else
                arr[x] = i;
        }
        cout<<id<<" ";
        for(ll i=1; i<n; ++i) {
            cout<<arr[id]<<" ";
            id = arr[id];
        }
        cout<<endl;
    }
}
