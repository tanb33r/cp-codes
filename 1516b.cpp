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
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

bool solve() {
    int n;
    string s;
    cin>>n;
    int a[n];
    int pre[n+1] {0};
    ff(i,1,n+1) {
        cin>>a[i];
        pre[i] = pre[i-1] ^ a[i];
    }
    bool ans=!pre[n];
    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<n; j++)
            ans|=(pre[i]==(pre[j]^pre[i]) && pre[i]==(pre[n]^pre[j]));
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        hmm(solve());
}
