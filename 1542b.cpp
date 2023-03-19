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
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmmm(x)            cout<<(x?"Yes":"No")<<"\n";
#define  ll                 long long
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

int hmm(int a,int b,int n) {
    if(n==1) return 1;
    int ans1=0;
    int ans2=0;
    if((a!=1 and n%a==0) or n-b>0) {
        if(n-b>0)           ans1 = hmm(a,b,n-b);
        if(a!=1 and n%a==0) ans2 = hmm(a,b,n/a);
    }
    return ans1 or ans2;
}


void solve() {
    ll n,a,b;
    cin>>n>>a>>b;
    if(b==1) {
        ps(Yes);
        return;
    }
    if(a==1) {
        if((n-1)%b==0) ps(Yes);
        else ps(No);
        return;
    }
    ll x=1,boo=0;
    while(x<=n) {
        if((n-x)%b==0) boo=1;
        x*=a;
    }
    hmmm(boo);
}



//while( n - a*k>0 and m[n - a*k]==0) {
////            deb(n - a*k);
//    m[n - a*k]++;
//    k++;
//}
//for(auto i:m) {
//    if(i.first%b==0) {
//        deb(i.first);
//        ps(Yes);
//        return;
//    }
//
//}
//ps(No);
//}


int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
