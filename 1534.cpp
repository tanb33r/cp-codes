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
#define  ll                 long long
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n,m ;
    cin>>n;
    int a[n];
    f(i,n)  cin>>a[i];
    ll ans = 0ll;
    if(n==1) {
        cout<<a[0]<<endl;
        return;
    }

    f(i,n) {
        if(!i and a[i]>a[i+1])
            ans+= a[i]-a[i+1], a[i] = a[i+1];
        else if(i == n-1) {
            if(a[i]>a[i-1])
                ans+= a[i]-a[i-1], a[i] = a[i-1];
        } else if(a[i]>a[i+1] and a[i]>a[i-1])
            ans+= a[i]-max(a[i+1],a[i-1]), a[i] = max(a[i+1],a[i-1]);
    }
//    arrp(a,n);

    ll gg=a[0];
    ff(i,1,n) {
        if(a[i] != a[i-1])
            gg+= abs(a[i]-a[i-1]);
    }
    gg+=a[n-1];
    cout<<gg+ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
