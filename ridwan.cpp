#include<bits/stdc++.h>
using namespace std;
using ll= long long ;
#define for1(i,n) for(ll i=0;i<n;i++)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

#define  deb(x)             cerr<<(#x)<<" ="<<x<<"\n"
int recPolynomial(ll i,ll x,ll n) {
    if(n==0)return 1;
    deb(i<<' '<<x);
    if(i<n) return (ll)pow(x,i) + recPolynomial(i+1,x,n);
//    return 1;
}
int test(int l) {
    if(l==0)return 1;
}

int main() {
    ll n,x;
    int l = 9;
    cout<<test(l);
//    cin>>x>>n;
//    cout<<recPolynomial(0ll,x,n);

}
