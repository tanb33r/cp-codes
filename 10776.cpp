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
#define  ms(a,x)            memset(a,x,sizeof(a))
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
using namespace std;
int n, sz ;
vector<char>ans;
bool taken[107];
string s;
void gen() {
    if(ans.size() == sz ) {
        f(i,sz) cout<<ans[i];
        newl;
        return;
    }
    f(i,n) {
        if(ans.size() > 0 && ans[ ans.size()-1 ] > s[i] )  continue;

        if(taken[i] == 0) {
            taken[i] = 1;
            ans.pb(s[i]);
            gen();
            taken[i] = 0;
            ans.pop_back();
            while(s[i]==s[i+1] && i+1 < n )i++;
        }
    }
}

int main() {
    while(cin>>s>>sz) {
        n = s.size();
        sort(all(s));
        ans.clear();
        ms(taken,0);
        gen();
    }
}
