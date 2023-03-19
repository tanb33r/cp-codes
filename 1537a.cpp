#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  ll                 long long
#define  fast               ios::sync_with_stdio(0),cin.tie(0);
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void SOL() {
    int n,m ;
    cin>>n;
    int a[n];
    ll sum =0 ;
    f(i,n) {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum<0) {
        cout<<1<<"\n";
        return;
    }
        cout<<(sum>=n?sum-n:1)<<"\n";
}


int main() {
    fast
    int TEST=1;
    cin>>TEST;
    while(TEST--)
        SOL();
}
