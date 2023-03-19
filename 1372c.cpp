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
typedef  long long          ll;
using namespace std;

void solve() {
    in(n);
    int a[n];
    f(i,n)
    cin>>a[i];

    int c = 0 ;
    int j =-1;
    f(i,n)
    if(a[i] != i+1) {
        c++;
        while(i<n and a[i] != i+1) i++;
        j = i;
        break;
    }
    if(!c) d(c);
    else {
        c = 0;
        ff(i,j+1,n)
        if(a[i] != i+1) {
            c++;
            break;
        }

        (c)?d(2):d(1);
    }

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
