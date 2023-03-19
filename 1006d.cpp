#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n,m ;
    string s,t;
    cin>>n>>s>>t;
    int ans = 0 ;
    f(i,n/2) {
        map<char,int> a;
        a[s[i]]++;
        a[s[n-i-1]]++;
        a[t[i]]++;
        a[t[n-i-1]]++;
        if(a.size()==4)
            ans+=2;
        else if(a.size()==3)
            ans+=1+(s[i]==s[n-i-1]);
        else if(a.size()==2)
            ans+=a[s[i]]!=2;
    }
    /*
    1 2 ac cbc
    */

    if (n % 2 == 1 && s[n / 2] != t[n / 2])
        ans++;
    pr(ans);
}



int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
