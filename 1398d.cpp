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
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

int a,b,c;
vector<ll> va,vb,vc;
ll ans[203][203][203];

ll dp(int i, int j, int k) {
    if(ans[i][j][k]!=-1)return ans[i][j][k];
    ll aRG=0,aGB=0,aRB=0;
    if(i<a and j<b) aRG += dp(i+1,j+1,k)+va[i]*vb[j];
    if(j<b and k<c) aGB += dp(i,j+1,k+1)+vb[j]*vc[k];
    if(i<a and k<c) aRB += dp(i+1,j,k+1)+va[i]*vc[k];
    return ans[i][j][k]=max(aRG,max(aGB,aRB));

}
void solve() {
    memset(ans,-1,sizeof ans);
    cin>>a>>b>>c;
    va.resize(a);
    vb.resize(b);
    vc.resize(c);
    f(i,a)cin>>va[i];
    f(i,b)cin>>vb[i];
    f(i,c)cin>>vc[i];
    sort(va.rbegin(),va.rend());
    sort(vb.rbegin(),vb.rend());
    sort(vc.rbegin(),vc.rend());
    pr(dp(0,0,0));
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
