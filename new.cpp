#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x); s
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
//    FILE *fp,*rp;
//    fp = fopen("file.txt", "w");
//    rp = fopen("output.txt", "r");
    while(1) {
        int x=1;
        string s;
        char a;
        getline(cin,s);
//        deb(s.size());
int ff=0;
        f(i,s.size()) {
            if(s[i]==' ')continue;
            else{ff=1;
                cout<<s[i];}
        }
        if(ff)newl;
        if(s=="*")break;
    }
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

