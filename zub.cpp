#include <bits/stdc++.h>
using namespace std;

int main() {
    long long   ans,n,k,a;
    cin>>n>>k>>a;
    ans = (n*k)/a;
    double d;
    d = ((double)n*k)/a;
    int intd = d;
    double asd = d - intd;
    if(asd>0) cout<<"double\n";
    else if(ans > 2147483647 ) cout<<"long long\n";
    else cout<<"int\n";
}
