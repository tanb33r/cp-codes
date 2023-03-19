#include <bits/stdc++.h>
#define  d(x)               cout<<x<<"\n"
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

typedef  long long          ll;
const ll mod = 1e9+7;

int a,n,b=1;

int main() {
    fastio;
    cin>>n;
    while(--n)
        a = ((b = 3LL*b % mod)-a+mod)%mod;
    d(a);
}
