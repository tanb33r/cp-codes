#include<bits/stdc++.h>
using namespace std;



vector<int> v;
const int S = 1e3;
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




//vector<int> primes; // we'll preload primes once at the beginning
int countDivisor(int n) {
    int divisor = 1;
    for (int i = 0; i < v.size() && prime[i]*prime[i]<= sqrt(n) + 1; i++) {
        if (n % v[i] == 0) {
            int cnt = 1;
            while (n % v[i] == 0) {
                n /= v[i];
                cnt++;
            }
            divisor *= cnt;
        }
    }
    return (n>1)?divisor*2:divisor;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    cout<<countDivisor(36);
}
