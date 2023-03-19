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
typedef  long long          ll;

void solve() {
    int dis,nm,nh,vm,vh,kd,kv;

    cin>>dis>>nm>>nh>>vm>>vh;
    if(dis+nm+nh+vm+vh==0)break;

    if(vm>=vh) {
        kd=dis;
        kv=vm;
    } else if(nm<=nh) {
        kd=dis;
        kv=max(vm,vh);

    } else {
        kd=(dis)*(2*nm*vh-nh*vh+nh*vm);
        kv=(vh)*(2*nm*vm+nh*(vh-vm));


    }
    ll t=gcd(kd,kv);
    kd/=t,kv/=t;
    cout<<kd<<"/"<<kv<<" ";
    cout<<"\n";


}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

