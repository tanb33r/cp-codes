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
#define  vprint(vec)        for(int I=0; I<(vec).size(); I++)cout << vec[I] << " ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;


int main() {
    fastio;
    w(t) {
        int n, m;
        cin >> n >> m;
//        char s[n][m];
        vector<string> s(n);
        f(i, n)
        cin >> s[i];
//        int cr[n], cm[m];
//        memset(cr,0,sizeof(cr));
//        memset(cm,0,sizeof(cm));
//

        vector<int> cr(n,0), cm(m,0);




//        f(i, n)
//        cout<<cr[i]<<" ";
//        newl;
//        f(i, m)
//        cout<<cm[i]<<" ";
//        newl;



        f(i, n)
        f(j, m)
        if(s[i][j] == '.')
            cr[i]++,cm[j]++;

        int ans = n+m;
        f(i, n)
        f(j, m)
        ans = min(ans, cr[i] + cm[j] - (s[i][j] == '.'));

        d(ans);
    }

}
