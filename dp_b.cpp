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
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;
int n,k;
int a[100005];
void solve() {
    cin>>n>>k;
    ll cost[n];
    f(i,n) {
        cin>>a[i];
        cost[i] = 100000000000;
    }
    for(int i =n-1; i>=0; i--) {
        int kk = k;
        if(i==n-1) cost[i]=0;
        else
            while(kk) {
                if(i+kk<n) {
                    cost[i]= min(cost[i],ll(cost[i+kk]+abs(a[i]-a[i+kk])));
//                    cost[i]= min(cost[i+1]+abs(a[i]-a[i+1]),cost[i+2]+abs(a[i]-a[i+2]));
                }
                kk--;
            }
    }
    pr(cost[0]);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
