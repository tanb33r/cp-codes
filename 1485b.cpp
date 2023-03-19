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
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
    int n,q,k,l,r;
    cin>>n>>q>>k;

    int a[n],b[n];
    ll c[n];
    f(i,n)
    cin>>a[i];
    f(i,n) {
        if(!i)
            b[i] = a[i+1]-2;
        else if (i and i<n-1)
            b[i] = a[i+1]-a[i-1]-2;
        else  b[i] = k-a[i-1]-1;
    }

    f(i,n) {
        if(!i) c[i]=b[i];
        else c[i] = (b[i])+c[i-1];
    }
    f(i,q) {


        cin>>l>>r;
        if(n==1) {
            d(k-1);
            continue;
        }
        if(l==r) {
            int kkkkkkkkk;
            d(k-1);
            continue;
        }
        l--;
        r--;
        int ans =0;
        if(r-l>1) ans +=c[r-1]-c[l];
        ans+= a[l+1]-2 + k-a[r-1]-1;
        d(ans);
    }
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

