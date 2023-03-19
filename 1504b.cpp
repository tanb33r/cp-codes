#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  fast               ios::sync_with_stdio(0),cin.tie(0)
using namespace std;

void sol() {
    int n,m;
    string s,s2;
    cin>>n>>s>>s2;
    int d = s[0]==s2[0];
    int i = 0;
    for(int i =n-1; i>=0; i--) {
        if(s[i]==s2[i]) {
            s2.pop_back();
            s.pop_back();
        } else break;
    }
    while(i<n) {
        int count0=0,count1=0;
        if(d) {
            while(i<n and s[i]==s2[i]) {
                count0+= s[i]=='0';
                count1+= s[i]=='1';
                i++;
            }
        } else {
            while(i<n and s[i]!=s2[i]) {
                count0+= s[i]=='0';
                count1+= s[i]=='1';
                i++;
            }
        }
        if(count0!=count1) {
            cout<<"NO\n";
            return;
        }
        d=!d;
    }
    cout<<"YES\n";
}

int main() {
    fast;
    int t=1;
    cin>>t;
    while(t--)
        sol();
}
