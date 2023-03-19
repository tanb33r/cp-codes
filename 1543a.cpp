#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
using namespace std;

void solu() {
    ll a,b ;
    cin>>a>>b;
    ll x = abs(a-b);
    cout<<x<<" ";
    if(!x) pr(0);
    else pr(min((x -  a%x),(a%x)));

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int test=1;
    cin>>test;
    while(test--)
        solu();
}
