#include<bits/stdc++.h>

using namespace std;

int n, r, l, ans;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    string s;
    cin >> n >> s;
    set<char> S;
    for(char c : s)
        S.insert(c);
    map<char,int> M;
    while(M.size() < S.size())
        M[s[r++]]++;
    for(ans = n; r <= n; M[s[r++]]++) {
        while(M[s[l]]>1)
            M[s[l++]]--;
        ans=min(ans,r-l);
    }
    cout<<ans;
}
