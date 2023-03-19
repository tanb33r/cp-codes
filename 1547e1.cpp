#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)

using namespace std;
typedef pair<int,int> pii;

int main() {
    int n,k ;
    string s,s2;

    cin>>n>>k>>s;
    f(i,s.size()) {
        if(s[i]<=s[0]) {
            s2+=s[i];
        } else break;
    }
    while(s2[0] == s2.back() and s2.size()>1)
        s2.pop_back();

    int i = 0;
    while(k--) {
        cout<<s2[i++];
        if(i==s2.size())i=0;
    }

}
