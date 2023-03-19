#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" "
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  hmm(x)             cout<<(x?"YES":"NO")<<endl;
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;
int high(int n,int k) {
    return (k*(2*n+1-k))/2;
}
int low(int k) {
    return (k*(k+1))/2;
}
void solve() {
    int n,r,l,s,m,k,sum=0,ans=0;
    cin>>n>>l>>r>>s;
    k =r-l+1;

    int x = n;
    int i = 1;
    vector<int> v;
    map<int,int> mp;
    while(x and k)
        if(k>0 and high(x,k)>=s and s-x>= low(k-1)) {
            mp[x]++;
            v.pb(x),k--,s-=x--;
        } else x--;

    if(s==0) {
        int i =0,cnt = 1;
        while(cnt<=n) {
            if(cnt==l) {
                newl;
                newl;
                vout(v);
                newl;
                newl;
                cnt+=v.size();
            }
            if(cnt<=n and mp[++i]==0) {
                cnt++;
                cout<<i<<' ';

            }
        }
        newl;
    } else pr(-1);

}




int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
