#include <bits/stdc++.h>
using namespace std;

int main() {

    string a = "abc";
    auto it = lower_bound(a.begin(),a.end(),'b');
    a.erase(it);

    //ad
    int i=1;
    cout<<a<<endl;

    string s = "axabc";
     i = 1;
    s.erase(i,1);
// start and amount

    cout<<s;
}




