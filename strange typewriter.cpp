#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  hmm(x)             cout<<(x?"1":"impossible")<<endl
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

int T=1;
void solve() {
    int n,m,k,ans=1;
    cin>>n;

    string s,s2;
    map<string,int> mp;
    f(i,n) {
        cin>>s;
        mp[s]++;
    }
    cin>>s;
    f(i,s.size()) {
        s2+=s[i];
        if(mp[s2]>0) {
            s2.clear();
        }
    }

    ans= !s2.size();
    cout<<"Case "<<T++<<": "<<(ans?"1":"impossible")<<"\n";
    mp.clear();
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
