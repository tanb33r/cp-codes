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
    ll n,p,q,r,m=1e20+5,ma=-(1e20+5),k,ans=-(3e20+5);
    cin>>n>>p>>q>>r;
    ll minl[n],minr[n],maxl[n],maxr[n],a[n];
    f(i,n) {

        cin>>a[i];
        m=min(a[i],m);
        minl[i]=m;
        ma=max(a[i],ma);
        maxl[i]=ma;
    }
    m=1e20+5,ma=-(1e20+5);
    for(int i =n-1; ~i; --i) {
        m=min(a[i],m);
        minr[i]=m;
        ma=max(a[i],ma);
        maxr[i]=ma;
    }

    f(i,n) {
        ll sum = q*a[i];
        sum+= p<0? minl[i]*p : maxl[i]*p ;
        sum+= r<0? minr[i]*r : maxr[i]*r ;
        deb(sum);
        ans = max(ans,sum);

    }

    pr(ans);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

