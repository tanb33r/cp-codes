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
    int n,k=0,c1=0,b=0;
    string s,s0,s1;
    cin>>n>>s;
    s0=s1=s;
    f(i,n) c1+=(s[i]=='1');
    if(s[0] != '1' or s.back() != '1' or c1&1) {
        ps(NO);
        return;
    }
    f(i,n)
    if(s[i]=='1') {
        s1[i]=s0[i]=(2*k<c1)?'(':')';
        k++;
    } else {
        s1[i]= b ?'(':')';
        s0[i]= !b?'(':')';
        b=!b;
    }
    ps(YES);
    pr(s1);
    pr(s0);

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
