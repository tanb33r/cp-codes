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

void solve() {
    int n,k,ans=0;
    string s1,s2;
    cin>>n>>k>>s1>>s2;
    map<int, int> a,b;
    f(i,s1.size()) a[s1[i]-'a']++;
    f(i,s2.size()) b[s2[i]-'a']++;

    f(i,26) {
        if(a[i]<b[i] or (a[i]-=b[i])%k) {
            ans=1;
            break;
        }
        a[i+1] += a[i];
    }

    cout<<(ans?"NO":"YES")<<endl;
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

