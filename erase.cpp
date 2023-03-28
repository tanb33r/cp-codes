#include <bits/stdc++.h>
using namespace std;

int main() {

    string a = "abc";
    auto it = lower_bound(a.begin(),a.end(),'b');
    a.erase(it);

    //ad
    int i=1;
    a.erase(1);
//    1 index theke shb delete korbe
    cout<<a;
    a.erase(0,1);
//    erase 1st elemnt
}




