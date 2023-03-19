#include <bits/stdc++.h>
using namespace std;
long long n,m,i,s;
int main() {
    cin>>n>>m;
    vector<long long>A(n),B(m);
    for(auto&e:A)
        cin>>e;
    sort(begin(A),end(A));
    while(i<n)
        cout<<(s+=B[++i%m]+=A[i])<<' ';
}
