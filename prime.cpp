#include <bits/stdc++.h>
using namespace std;

int n =1e3;
bool prime[1000];
void sieve() {
    for(int i = 2; i<n; i++) {
        if(prime[i]==0) {
            for(int j = i+i; j<n; j+=i)
                prime[j]=1;
        }
    }
}
int main() {

    sieve();
//    for(int  i=2; i<n; i++)
//        cout<<i<<" "<<prime[i]<<"\n";
    int x;
    cin>>x;  // n = i + n - i
    for(int i = 2; i<=x/2; i++) {
        if(prime[i]==0 and prime[x-i] == 0) {
            cout<<i<<" "<<x-i<<"\n";
//            cnt++;
//            break;
        }
    }

}
