#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n,m ;
    string S,T;
    cin>>n>>m>>S>>T;
    int k =0;
    int j=0;
    while(k<n) {
        bool b = 0;
        for(int i=j; i<T.size(); i++)
            if(S[k]==T[i]) {
                j = i;
                k++;
                b=1;
            }
        if(b==0) break; //no match found for kth character of S
    }
    //if we get a match for all the characters, value of k will be n
    if(k==n) cout<<"YES\n";
    else cout<<"NO\n";

}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    while(t--)
        solve();
}
