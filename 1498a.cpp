#include <bits/stdc++.h>
using namespace std;
long long int Sum(long long int n) {
    long long int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
long long int gcd(long long int a, long long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {

    ios::sync_with_stdio(0),cin.tie(0);
    long long int t,i,j,k,n,m,a,sum,b;
    cin>>t;

    while(t--) {

        cin>>n;
        a=n;
        while(1) {
            sum=Sum(a);
            b= gcd(a,sum);
            if(b>1)break;
            a++;
        }
        cout<<a<<"\n";
    }

    return 0;
}
