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
int n;
int a[100005];
int rec(int i, ll cost) {
    if(i==n-1) return cost;
    if(i==n-2) return rec(i+1,cost+abs(a[i]-a[i+1]));
    return min(rec(i+1,cost+abs(a[i]-a[i+1])),rec(i+2,cost+abs(a[i]-a[i+2])));
}
void solve() {
    cin>>n;
    f(i,n) {
        cin>>a[i];
    }
    int cost[n] {0};
    for(int i =n-1; i>=0; i--) {
        if(i==n-1) cost[i]=0;
        else if(i==n-2) cost[i]= cost[i+1]+ abs(a[i]-a[i+1]);
        else
            cost[i] = min(cost[i+1]+abs(a[i]-a[i+1]),cost[i+2]+abs(a[i]-a[i+2]));
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
