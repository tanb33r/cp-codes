#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1,s2;
    int i;
    cin >> s1 >> s2;
    for( i = 0 ; i <s1.length(); i++) {
        s1[i] = towlower(s1[i]);
        s2[i] = towlower(s2[i]);
    }
    if(s1==s2) {
        cout << 0 <<endl;
    } else {
        if(s1 < s2) {
            cout << -1 <<endl;
        } else {
            cout << 1 <<endl;
        }
    }
}
