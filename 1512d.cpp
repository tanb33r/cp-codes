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
#define  hmm(x)             cout<<(x?"YES":"NO")<<endl;
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
    ll ig=-1, ig2=-1,n,m,k=-1ll,sum=0ll;
    cin>>n;
    ll b[n+2];
    f(i,n+2) {
        cin>>b[i];
    }

    sort(b,b+n+2);
    f(i,n) {
        sum+= b[i];
    }
    if(sum==b[n]) {
        ig=n+1,ig2=n;
    } else if(sum==b[n+1]) {
        ig=n+1,ig2=n;
    } else {
        sum+=b[n];
        ll sum2= sum;
        f(i,n) {
            sum = sum2;
            sum-=b[i];
            if(sum==b[n+1]) {
                ig = i;
                ig2 = n+1;
                break;
            }
        }

    }
    if(ig==-1) pr(-1);
    else {
        f(i,n+2) {
            if(i==ig or  i == ig2) continue;
            else cout<<b[i]<<" ";
        }
        newl;
    }
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
