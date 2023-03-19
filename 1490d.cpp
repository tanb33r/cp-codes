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
int a[200],b[200];
void ass(int l,int r,int va) {
    if(l>r) {
        return;
    }
    if(l==r) {
        b[l] = va;
        return;
    }
    int x=0,ind;
    for(int i =l; i<=r; i++) {
        if(x<a[i])
            x=a[i],ind = i;
    }
    b[ind] = va;
    ass(l,ind-1,va+1);
    ass(ind+1,r,va+1);

}
void solve() {
    in(n);
    f(i,n)
    cin>>a[i];

    ass(0,n-1,0);
    f(i,n)
    cout<<b[i]<<" ";
    newl;

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

