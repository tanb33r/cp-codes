#include <bits/stdc++.h>
using namespace std;
int T=1;
void solve() {
    string a,b;
    cin>>b>>a;
    int m = a.size()+1;
    int n = b.size()+1;
    int l[m][n];
    string s ;
    for(int i = 0; i<m; i++)
        for(int j = 0; j<n; j++)
            if(i == 0 || j == 0)
                l[i][j] = 0;
            else if(a[i-1] == b[j-1])
                l[i][j] = l[i-1][j-1]+1;
            else
                l[i][j] = max(l[i-1][j],l[i][j-1]);

    int i = m-1, j = n-1;
    while (i > 0 && j > 0) {
        if (a[i-1] == b[j-1]) {
            s += a[i-1];
            i--;
            j--;
        } else if (l[i-1][j] > l[i][j-1])
            i--;
        else
            j--;
    }
     reverse(s.begin(),s.end());

    cout<<"Case "<<T++<<": "<<(s.size()?s:":(")<<"\n";
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}



