#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  hmm(x)             cout<<(x?"YES":"NO")<<endl;
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

int check(string s) {
    int i=0,j=s.size()-1;
    int ans =0;
    while(i<=j) {
        if(s[i++]==s[j--])
            ans++;
        else break;
    }

    return ans;
}
void solve() {
    int n,k,ans=1;
    string s,s2;
    cin>>n>>k>>s;
    if(k==0) {
        ps(YES);
        return;
    }
    int x  = check(s);
//    deb(x);
    if(k==((s.size()+1)/2)) {
        ps(NO);
        return;
    }
    hmm(k<=x);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

