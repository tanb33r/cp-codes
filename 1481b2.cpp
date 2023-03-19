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
typedef  long long ll;

void solve() {
    int n, k,m=0;
    cin>>n>>k;
    int a[n];
    f(i,n) {
        cin>>a[i];
    }
    /*
    1
    3 150
    100 90 200


    */
    int i=0,l = 0,r = 0;
    while(k>0) {
        if(i<n-1 and a[i]<a[i+1]) {
            if(k>a[i+1]-a[i]) {
                k-=a[i+1]-a[i];
                a[i]=a[i+1];
                i=0;
                continue;
            } else {
                d(i+1) ;
                return;
            }
        }
        if(i>=n-1) {
            d(-1);
            return;
        }
        i++;
    }

    if(k>0)
        d(-1);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

