#include <bits/stdc++.h>
const int mod = 1000000007;
using namespace std;

int main() {
    int n ;
    while(cin>>n) {
        int i,tmp  = 1 ;
        for(i = 1; ; ++i) {
            if(tmp%n == 0) break;
            tmp = tmp*10 +1;
            tmp %=n ;
        }
        cout<<i<<endl;
    }
}
