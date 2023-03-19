#include <bits/stdc++.h>
using namespace std;
long long b[500][500],c[500],a=0;
string s;
main() {
    cin>>s;
    for(int i=0; i<s.size(); i++) {
        for(int q='a'; q <='z'; q++) {
            b[q][s[i]]+=c[q];   // age koto bar ashse oita jog damn!
            a=max(a,b[q][s[i]]);
        }
        c[s[i]]++; // jegula age ashse
        a=max(a,c[s[i]]);
    }
    cout << a;
}
