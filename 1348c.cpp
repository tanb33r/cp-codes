#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  all(v)             v.begin(),v.end()
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr

typedef  long long          ll;


const int mod = 1000000007;
using namespace std;

int main() {

//    fastio;
    w(t) {
        in(n);
        in(k);
        string ss,s2;

        vector<string>s(k);
        cin>>ss;
        s2 = ss;
        sort(all(ss));


        int x=0;

        char c = ss[0];
        f(i,k)
        if(c != ss[i]) {
            d(ss[k-1]);
            continue;
        }


        ss.erase(ss.begin(),ss.begin()+k);
        f(i,k)
        s[i]+=c;


        string nice(ss.size(),ss[0]);
        if(ss != nice) {
            s[0]+=ss;
            d(s[0]);
            continue;
        }
        int j = 0;
        f(i,ss.size()) {
            s[j++] += ss[i];
            if(j==k) j=0;
        }
        sort(all(s));
        d(s[k-1]);
    }
}
