#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,k,x;
    cin>>t;
    while(t--) {
        x=1;
        cin>>n>>k;
        string s(n,'a');
        while(k>x)k-=x++;
        s[n-x-1]=s[n-k]='b';
        cout<<s<<"\n";
    }
}
