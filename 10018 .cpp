#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll c;

ll rev(ll n) {
    ll p=0;
    ll temp = n;
    while(temp) {
        p=p*10+temp%10;
        temp/=10;
    }
    return p;
}

ll pal(ll n) {
    ll p = rev(n);
    ll sum = p+n;
    c++;
    if(sum==rev(sum))       return sum;

    else                    return pal(sum);
}

int main() {

    ll n;
    int t;
    cin>>t;
    while(t--) {
        c=0;
        cin>>n;
        ll p=pal(n);
        cout<<c<<" "<<p<<endl;
    }
}
