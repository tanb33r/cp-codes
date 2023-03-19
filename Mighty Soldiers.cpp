#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  pb(x)              push_back(x)

using namespace std;
int num(int x,char c) {
    return x*10 + c-'0';
}
int a[150000];
void solve() {
    int n;
    string s;
    cin>>n>>s;
    int x=0;
    vector<int> v;
    v.pb(0);
    int prev = 0;
    int j =0;
    f(i,s.size()) {
        if(s[i]>='0' and s[i]<='9')
            x = num(x,s[i]);
        else {
            if(x) {
                a[x] = v.back();
                v.pb(x);
            }
            if(s[i]!='(' )  v.pop_back();
            x=0;
        }

    }
    f(i,n) cout<<a[i+1]<<" ";
       cout<<"\n";
}



int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    while(t--)
        solve();
}




