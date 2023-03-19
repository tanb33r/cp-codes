#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
using namespace std;

bool cmp(string a, string b) {
    if(a.find(b) != string::npos)
        return 0;
    return 1;
}

int main() {
//    ios_base::sync_with_stdio(false);
    int n;
    while(cin >> n && n) {
        set<string> seq;
        map<string,int> m;
        string s[n];
        f(i,n) cin>>s[i];
        sort(s,s+n,cmp);

        f(i,n) cout<<s[i]<<" ";
        int ans = 0,a=0;
//        f(i,n-1) {
//            if (s[i+1].find(s[i]) != string::npos)
//                a++;
//            else
//                a = 0;
////            cout<<a<<" ";
//            ans = max(ans,a);
//        }
//
//        cout<<ans+1<<endl;
    }
}
