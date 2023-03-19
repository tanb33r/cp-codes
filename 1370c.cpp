#include <bits/stdc++.h>
#define  in(x)              int x; cin>>x
#define  F                  cout << "FastestFinger\n"
#define  A                  cout << "Ashishgup\n"

using namespace std;

bool isprime(int n) {
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i == 0) return false;
    return true;
}

void solve() {
    in(x);
    if(x == 1)             F;
    else if(x == 2)        A;
    else if(x%2==1)        A;
    else if(!(x&(x-1)))    F;
    else if(isprime(x/2))  F;
    else                   A;
}

int main() {

    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
