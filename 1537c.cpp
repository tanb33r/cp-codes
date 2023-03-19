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
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
#define  fast               ios::sync_with_stdio(0),cin.tie(0);
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void Sol() {
    int n,m ;
    cin>>n;
    int a[n];
    int MI = 1e9+5;
    f(i,n) cin>>a[i];
    sort(a,a+n);
    int h1,h2;
    for(int i=1; i<n; ++i)
        MI = min(MI,abs(a[i] - a[i-1]));

    for(int i=1; i<n; ++i)
        if(abs(a[i] - a[i-1]) == MI) {
            h1 = min(a[i],a[i-1]);
            h2 = max(a[i],a[i-1]);
            a[i-1] = a[i] = -1;
            break;
        }

    vector <int> chto,boro;
    f(i,n) {
        if(a[i]>0) {
            if(a[i]<=h1)
                chto.pb(a[i]);
            else  boro.pb(a[i]);
        }
    }
    sort(all(chto));
    sort(all(boro));
    cout<<h1<<" ";
    f(i,boro.size()) {
        cout<<boro[i]<<" ";
    }
    f(i,chto.size()) {
        cout<<chto[i]<<" ";
    }
    cout<<h2<<"\n";
}

int main() {
    fast;
    int t=1;
    cin>>t;
    while(t--)
        Sol();
}
