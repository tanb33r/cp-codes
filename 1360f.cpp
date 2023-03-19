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

bool check(char s[],char s1[]) {
    int w=0;
    for(int i=0; s[i]; i++)if(s[i]!=s1[i])w++;
    return w>1;
}
char s[20][20];
void work() {
    in(n);
    in(m);

    f(i,n)
    cin>>s[i];
    f(i,m) {
        char c=s[0][i];
        f(j,26) {
            s[0][i]=j+'a';
            bool flag=1;
            ff(k,1,n)
            if(check(s[0],s[k])) {
                flag=0;
                break;
            }
            if(flag) {
                d(s[0]);
                return;
            }
        }
        s[0][i]=c;
    }
    d(-1);


}
int main() {
    fastio;
    w(t) {
        work();
    }
}
