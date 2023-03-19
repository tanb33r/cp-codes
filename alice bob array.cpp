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
#define  arrp(a,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  hmm(x)             cout<<(x?"YES":"NO")<<endl;
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;
int T=1;
void solve() {
    ll n,m,k,ans=0;
    ll N=0;
    cin>>n;
    ll a[n],sum=0,x=0;
    ll ma = -100001 ;
    f(i,n) {
        cin>>k;
        ma = max(ma,k);
        if(k>0) sum+=k;
        if(N==0 and k<=0) continue;
        if(k==0) continue;
        a[N++]=k;
    }
    while(N>0 and a[N-1]<=0) N--;
    bool b = 1;
    f(i,N) {
        if(!b and a[i]<0) continue;
        else if(a[i]>0) b=1;
        else if(b and a[i]<0) b=0,ans++;
    }
    if(ma<0)
        cout<<"Case "<<T++<<": "<<ma<<" "<<0<<"\n";
    else
        cout<<"Case "<<T++<<": "<<sum<<" "<<max(0ll,ans)<<"\n";
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--)
        solve();
}
