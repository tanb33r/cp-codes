#include<bits/stdc++.h>
using namespace std;



vector<int> v;
const int S = 1e5+5;
bool prime[S];
void sieve() {
    v.push_back(2);
    for(int i = 3 ; i < S; i+=2)
        if(!prime[i]) {
            v.push_back(i);
            for(int j = i*i ; j < S; j+=2*i)
                prime[j] = 1 ;
        }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    for (int i = 0; i < (int)v.size(); i+=10)
        cout << v[i] << '\n';
}
