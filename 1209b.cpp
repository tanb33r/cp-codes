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
#define  deb(x)             cout<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

int main() {
    fastio;
    string s;
    int n;
    cin>>n>>s;
    int a[n][2], p[n][200],ans = 0;
    memset(p,0,sizeof(p));
    f(i,n)
    cin>>a[i][0]>>a[i][1];

    f(i,n) {
        for(int j = 0; j<130;) {
            while(a[i][1]-- >0)
                p[i][j++] = s[i]-'0';
            (s[i]-'0')?s[i]--:s[i]++;

            if(s[i]-'0')
                f(k,a[i][0])
                p[i][j++]++;
            else j += a[i][0];
        }
    }
    f(j,130) {
        int cnt = 0;
        f(i,n)
        if(p[i][j]) cnt++;
        ans = max(ans,cnt);
    }

//    f(i,n) {
//        f(j,20)
//        cout<<p[i][j]<<" ";
//        newl;
//    }
    d(ans);
}
