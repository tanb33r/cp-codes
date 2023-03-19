#include<bits/stdc++.h>

using namespace std;

int n, r, l, B;

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string T;
    cin >> n >> T;
    set<char> S;
    for(char c : T)
        S.insert(c);
    map<char,int> M;
    while(M.size() < S.size())
        M[T[r++]]++;
    for(B = n; r <= n; M[T[r++]]++) {
        while(M[T[l]]>1)
            M[T[l++]]--;
        B=min(B,r-l);
    }
    cout<<B;
}
