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
    int r,c;
    cin>>r>>c;
    if(r==10 and (c==3 or c==10)) {
        ps(2);
        ps(DU);
        return;
    } else {
        string ans;
        if(r==10)  ans+="U",r--;
        if(r==9)   ans+="U",r--;
        if(c<7) {
            string s( c-1,'L');
            ans+=s;
            c=1;
        } else {
            string s(12-c,'R');
            ans+=s;
            c=12;
        }
        string s(12-r,'D');
        ans+=s;
        if(c==1) ans+="RRUU";
        if(c==12) ans+="LLUU";
        pr(ans.size());
        pr(ans);
    }
}



int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

