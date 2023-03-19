#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  pr(x)              cout<<x<<"\n"
#define  ll                 long long
using namespace std;

void solve() {
    ll n,m,sum=0,sum2=0;
    cin>>n;
    int a[n];
    f(i,n) {cin>>a[i],sum+=a[i];}
    cin>>m;
    int b[m];
    f(i,m) {cin>>b[i],sum2+=b[i];}
    if(sum !=sum2 ) {pr(-1);return;}

    ll i = 0,j = 0,c = 0,S = 0,S2 = 0;

    while(i<n and j<m) {
        while(S < S2 and i<n) S+=a[i++];
        while(S > S2 and j<m) S2+=b[j++];
        if(S == S2 and i<n and j<m) S+=a[i++],S2+=b[j++],c++;
    }
    pr(c);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    while(t--)
        solve();
}






