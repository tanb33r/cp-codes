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
int l;
void print(int ax) {

    int bx = ax;

    int ld = ax%10;
    if(((ax%100)/10) == l+1 and ld<l ) {
        ps(YES);
        return;
    }

    while(bx) {
        if(bx%10==l) {
            ps(YES);
            return;
        }
        bx/=10;
    }

    if(!(l&1)) {
        if(ax&1) {
            ps(no);
            return;
        }
    }
    int x =1;
    while(ax>=l*x) {
        if(ld == (l*x)%10) {
            ps(YES);
            return;
        }
        x++;
    }
    ps(NO);
}

void solve() {
    in(n);

    cin>>l;
    f(i,n) {
        in(x);
        print(x);
    }
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

