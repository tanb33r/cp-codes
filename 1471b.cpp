#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
//#define  pb(x)              push_back(x);
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
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
    vector<pair<int,int>>v;

    ll sum=0;
    int n,x,b;
    cin>>n>>x;
    int ii=0,kk = 0;
    bool flag =1;
    f(i,n) {
        cin>>b; sum+=b;
        if(flag)
            if(b%x==0) {

                v.push_back(make_pair(b/x,b));
                ii++;
            } else flag=0;
    }
    if(ii==n) {
        f(i, v.size()) {
            if(v[i].first%x==0) {
                sum+=v[i].second;
                v.push_back(make_pair(v[i].first/x,v[i].second));
            } else break;
            kk++;
        }
    }

    while(kk<v.size())
        sum+=v[kk++].second;

    d(sum);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

