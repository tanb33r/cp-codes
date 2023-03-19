#include "bits/stdc++.h"
using namespace std;

const int n = 1e8 + 10;
vector<int> v;

bool st[n+10];
void sieve() {
    int i,j;
    v.push_back(2);
    for(i=3; i*i<=n; i+=2)
        if(st[i]==0)
            for(j=i+i; j<=n; j+=i)
                st[j]=1;

    for(i=3; i<=n; i+=2)
        if(st[i]==0)
            v.push_back(i);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    for (int i = 0; i < (int)v.size(); i += 100)
        cout << v[i] << '\n';
}
