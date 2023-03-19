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
bool ispalin(string s) {
    string s2 = s;
    reverse(all(s));
    return s==s2;
}

void solve() {
    int b,a,c=0,ans=0;
    string s;

    cin>>a>>b>>s;
    int sz = s.size();
    f(i,sz)
    if(s[i]=='1') b--;
    else if(s[i]=='0') a--;

    f(i,sz)
    if(s[i] == '?' and s[sz-i-1] !='?')
        if(s[sz-i-1]=='1') s[i]='1',b--;
        else               s[i]='0',a--;

    f(i,sz) c+=s[i]=='?';


    f(i,sz)
    if(s[i] == '?' and s[sz-i-1] =='?') {
        if(sz&1 and i==sz/2) continue;
        if(b>1) s[i]=s[sz-i-1] ='1',b-=2;
        else s[i]=s[sz-i-1] ='0',a-=2;
    }

    if(sz&1 and s[sz/2]=='?')
        if(b>0) s[sz/2] = '1',b--;
        else    s[sz/2] = '0',a--;

    if(b<0 or a<0) {
        ps(-1);
        return;
    }

    if(!ispalin(s)) {
        ps(-1);
        return;
    }

    cout<<s<<"\n";

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
