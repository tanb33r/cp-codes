#include <bits/stdc++.h>
using namespace std;
string a="abacaba";
bool check(string s) {
    int cnt=0;
    for (int i=0; i<(int)s.size()-6; i++)
        cnt+=(s.substr(i,7)==a);
    return (cnt==1);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s,ans="No";
        cin >> n >> s;
        for (int i=0; i<n-6; i++) {
            string tmp=s;
            for (int j=0; j<n; j++) {
                if (tmp[j]=='?') {
                        tmp[j]=(j>=i && j-i<7)?a[j-i]:'x';
                }
            }
            if (check(tmp))
                ans="Yes\n"+tmp;
        }
        cout << ans << "\n";
    }
}
