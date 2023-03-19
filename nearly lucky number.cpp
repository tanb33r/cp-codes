#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n; // 2x10^9
    cin>>n;
    // modulus %
    int cnt = 0;
    while(n>0) {
        int LastDigit = n % 10;
        if(LastDigit == 4 || LastDigit == 7)
            cnt++;
        n = n/10;
    }

    if(cnt==4 || cnt == 7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

