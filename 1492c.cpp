#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  lin(x)             ll x; cin>>x
#define  print(x)           cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
    int n,m;
    string s1,s2;
    cin>>n>>m>>s1>>s2;
    int vis[m+10],vis2[m+10];
    int l=0,r=0;
    while(l<m and r<n) {
        if(s2[l]==s1[r]) {
            vis[l]=r;
            l++;
            r++;
        } else
            r++;
    }
    l=m-1;
    r=n-1;
    while(l>=0 and r>=0) {
        if(s2[l]==s1[r]) {
            vis2[l]=r;
            l--;
            r--;
        } else
            r--;
    }
    int ans=0;
    for(int i=0; i<m-1; i++)
        ans=max(ans,vis2[i+1]-vis[i]);
    print(ans);
}



int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

