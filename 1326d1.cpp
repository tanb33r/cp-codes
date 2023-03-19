#include <bits/stdc++.h>
#define  all(v)             (v).begin(), (v).end()
using namespace std;

bool ispalin(string s) {
    string s2 = s;
    reverse(all(s));
    return s == s2;
}

void solve() {
    string s;
    cin>>s;
    if(ispalin(s)) {
        cout<<s<<"\n";
        return;
    }
    int i = 0, j = s.size()-1;
    while(i<=j and s[i] == s[j])  i++,j--;

    string ns = s,ms;

    ns.erase(ns.begin()+j+1,ns.end());
    ns.erase(ns.begin(),ns.begin()+i);

    ms = ns;
    reverse(all(ms));
    while(ns.size() and !ispalin(ns)) ns.pop_back();
    while(ms.size() and !ispalin(ms)) ms.pop_back();
    reverse(all(ms));

    cout<<string(s,0,i)<<(ns.size()>=ms.size()?ns:ms)<<string(s,j+1)<<"\n";

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
