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

using namespace std;
typedef pair<int,int> pii;
typedef  long long          ll;

void solve() {
    ll n;
    cin>>n;
    ll a[n];
    for(int i = 1 ; i<=n ; i++)
        cin>>a[i];
    ll l=1,r=n,cnt = 0;
    ll ls = a[1],rs = a[n];
    while(l<r) {
        while(ls<rs and l+1<r) {
            l++;
            ls+=a[l];
            cnt++;
        }
        while(ls>rs and l<r-1) {
            r--;
            rs+=a[r];
            cnt++;
        }
        if(ls==rs) {
            l++;
            r--;
            ls=a[l];
            rs=a[r];
        }


        if(l>=r)break;
        if(l+1 == r) {
            cnt++;
            break;
        }
    }
    d(cnt);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


