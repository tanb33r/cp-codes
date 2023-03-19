#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fastio             ios::sync_with_stdio(0),cin.tie(0)
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0;I<(vec).size();I++)cout<<vec[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

int main() {
    fastio;
    w(t) {

        string s,s1,s2,s3,s4 ;
        cin>>s;
        s2 = s;
        int k,ans = INT_MAX,cnt, n = s.size();
        int cnt1=0, cnt0=0;
        f(i,n) {
            if(s[i] == '0') cnt0++;
            cnt1 = 0;
            ff(j,i+1,n-1)
                if(s[j] - '0') cnt1++;
            ans = min(ans, min(cnt1 + cnt0,(i+1 - cnt0) + n-(i+1)-cnt1));
        }
        d(ans);

    }
}
