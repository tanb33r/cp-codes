#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
using namespace std;

void solve() {
    int n,q;
    cin>>n;
    int a[n],x,cnt=0,cnt2=0;
    map<int,int> m;
    f(i,n) {
        cin>>a[i];
        ++m[a[i]];
    }
    for(auto i:m) {
        cnt+= i.second/4;
        cnt2+= (i.second%4)/2;
    }
    char c;
    cin>>q;
    f(i,q) {
        cin>>c>>x;
        if(c=='+') {
            ++m[x];
            if(m[x]%4 == 0) --cnt2,cnt++;
            else if(m[x]%2 == 0) cnt2++;
        } else {
            if(m[x]%4 == 0) cnt--,cnt2++;
            else if(m[x]%2 == 0) cnt2--;
            m[x]--;
        }
        (cnt>1 or (cnt==1 and cnt2>1))?ps(YES):ps(NO);
    }
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    while(t--)
        solve();
}
